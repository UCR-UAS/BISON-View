/* Engineer: Brandon Lu (blu006@ucr.edu)
 *           Cody Simons (csimo005@ucr.edu)
 * Organization: UCR SUAS
 * Project: BISON-View
 * Filename: bison_view.cpp
 * Description:
 * This is the main file for the BISON View main window.
 */

#include <QDebug>
#include <QPalette>
#include "BISON.h"
#include "bison_view.h"
#include "ui_bison_view.h"
#include "go_nogo.h"
#include "welcome_message.h"
#include "mission_commander.h"
#include "telemetry.h"
#include "image_processing.h"
#include "mission.h"
#include "autopilot.h"
#include "what_s_this.h"
#include "help.h"
#include "set_server.h"

BISON_View::BISON_View(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BISON_View)
{
    // run premade UI setup
    ui->setupUi(this);

    // initialize sockets
    tcp_sock = new QTcpSocket(this);
    connect(tcp_sock, SIGNAL(readyRead()), this, SLOT(process_pending_tcp()));
    connect(tcp_sock, SIGNAL(disconnected()), this, SLOT(server_disconnect()));
    //show menu bar
    ui->menuBar->show();

    // initialize tabs
    message_tab = new welcome_message(this);
    go_nogo_tab = new Go_NoGo(this);
    connect(this, SIGNAL(user_update(QString)), go_nogo_tab, SLOT(user_update(QString)));
    connect(this, SIGNAL(user_logout(QString)), go_nogo_tab, SLOT(remove_old(QString)));
    mission_commander_tab = new mission_commander(this);
    mission_commander_tab->hide();
    telemetry_tab = new telemetry(this);
    telemetry_tab->hide();
    image_processing_tab = new image_processing(this);
    image_processing_tab->hide();
    connect(this, SIGNAL(new_image(QString)), image_processing_tab, SLOT(new_image(QString)));
    connect(image_processing_tab, SIGNAL(button_pushed(int)), this, SLOT(image_processing_button_push(int)));
    mission_tab = new mission(this);
    mission_tab->hide();
    autopilot_tab = new autopilot(this);
    autopilot_tab->hide();

    // initialize go/no go
    go_status = false;
    ui->pushButton->setStyleSheet("color: grey;");
    ui->pushButton->setText("No &Go!");
    ui->pushButton->setEnabled(false);

    //initialize login
    logged_in = false;


    // add tabs
    ui->tabWidget->insertTab(0, message_tab, "System Message");
    ui->tabWidget->insertTab(1, go_nogo_tab, "Go / NoGo");

    // comboBox items
    for (int i = 0; i < MAX_TEAMS; i++) {
        ui->comboBox->insertItem(i, TEAM_NAMES[i], i);
    }
    ui->comboBox->setEnabled(false);
    ui->comboBox->setStyleSheet("color: grey");
    role = 0;

    serverRefresh = new QTimer(this);
    serverRefresh->stop();
    // initialize text fields
    ui->lineEdit->setPlaceholderText("Username");
    ui->lineEdit->setEnabled(true);
    ui->lineEdit_2->setPlaceholderText("Password");
    ui->lineEdit_2->setEnabled(true);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);

    // initialize signals
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(go_press()));
    connect(serverRefresh, SIGNAL(timeout()), this, SLOT(timeToRefresh()));
    on_actionSet_Server_triggered();
}

BISON_View::~BISON_View()
{
    delete message_tab;
    delete go_nogo_tab;
    delete mission_commander_tab;
    delete telemetry_tab;
    delete image_processing_tab;
    delete mission_tab;
    delete autopilot_tab;
    delete tcp_sock;
    delete ui;
}

void BISON_View::go_press()
{
    mission_tab->hide();
   QString message;
   QByteArray data;
   if(go_status){
     message = "%D G 0";
   }else{
     message = "%D G 1";
   }
   data.append(message);
   tcp_sock->write(data);
   tcp_sock->flush();
   tcp_sock->waitForBytesWritten(3000);
}

void BISON_View::update_go()
{
    if (go_status) {
        ui->pushButton->setStyleSheet("color: darkgreen");
        ui->pushButton->setText("&Go!");
    } else {
        ui->pushButton->setStyleSheet("color: red;");
        ui->pushButton->setText("No &Go!");
    }
}

void BISON_View::on_actionWhat_s_this_triggered()
{
    what_s_this myDialog;
    myDialog.setModal(true);
    myDialog.exec();
}

void BISON_View::on_actionBISON_View_Help_triggered()
{
    help myDialog;
    myDialog.setModal(true);
    myDialog.exec();
}

void BISON_View::on_actionSet_Server_triggered()
{
    set_server myDialog;
    connect(&myDialog, SIGNAL(ip_out(QString)), this, SLOT(connect_to_server(QString)));
    myDialog.setModal(true);
    myDialog.exec();
}

void BISON_View::update_login()
{
    if(logged_in){
        ui->commandLinkButton->setText("Log Out");
        ui->lineEdit->hide();
        ui->lineEdit_2->hide();
        ui->pushButton->setEnabled(true);
        ui->pushButton->setStyleSheet("color: red");
        ui->comboBox->setEnabled(true);
        ui->comboBox->setStyleSheet("color: black");
    }else{
        ui->commandLinkButton->setText("Login");
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_2->setText("");
        ui->pushButton->setEnabled(false);
        ui->pushButton->setStyleSheet("color: grey");
        ui->pushButton->setText("No &Go!");
        go_status = false;
        role=0;
        ui->comboBox->setCurrentIndex(0);
        ui->comboBox->setEnabled(false);
        ui->comboBox->setStyleSheet("color: grey");
        update_role();
    }
}

void BISON_View::update_role()
{
    int tab = ui->tabWidget->currentIndex();
    if(ui->tabWidget->count() >= 2){
        ui->tabWidget->removeTab(2);
    }
    if(!mission_commander_tab->isHidden()){
        mission_commander_tab->hide();
    }
    if(!telemetry_tab->isHidden()){
        telemetry_tab->hide();
    }
    if(!image_processing_tab->isHidden()){
        image_processing_tab->hide();
    }
    if(!mission_tab->isHidden()){
        mission_tab->hide();
    }
    if(!autopilot_tab->isHidden()){
        autopilot_tab->hide();
    }
    switch(role){
        case 1:
            mission_commander_tab->show();
            ui->tabWidget->insertTab(2, mission_commander_tab, "Mission Commander");
            break;
        case 2:
            telemetry_tab->show();
            ui->tabWidget->insertTab(2, telemetry_tab, "Telemetry");
            break;
        case 3:
            telemetry_tab->show();
            ui->tabWidget->insertTab(2, image_processing_tab, "Image Processing");
            break;
        case 4:
            mission_tab->show();
            ui->tabWidget->insertTab(2, mission_tab, "Mission");
            break;
        case 5:
            autopilot_tab->show();
            ui->tabWidget->insertTab(2, autopilot_tab, "Autopilot");
            break;
    }
    ui->tabWidget->setCurrentIndex(tab);
}

void BISON_View::on_commandLinkButton_clicked()
{
    if(ui->lineEdit->text() != "" && ui->lineEdit_2->text() != "" && !logged_in){
        QString message = "%L " + ui->lineEdit->text() + " " + ui->lineEdit_2->text();
        QByteArray credential;
        credential.append(message);
        tcp_sock->write(credential);
        tcp_sock->flush();
        tcp_sock->waitForBytesWritten(3000);
    }else if(logged_in){
        QString message = "%LO";
        QByteArray credential;
        credential.append(message);
        tcp_sock->write(credential);
        tcp_sock->flush();
        tcp_sock->waitForBytesWritten(3000);
    }
}

void BISON_View::on_comboBox_currentIndexChanged(int index)
{
    role = index;
    update_role();
    if(tcp_sock->state() == QTcpSocket::ConnectedState)
    {
        QString role_update = "%D R ";
        role_update.append(QString::number(role));
        QByteArray message;
        message.append(role_update);
        tcp_sock->write(message);
        tcp_sock->flush();
        tcp_sock->waitForBytesWritten(3000);
    }
}

void BISON_View::broadcast_tcp()
{

}

void BISON_View::process_pending_tcp()
{
    QByteArray data = tcp_sock->readAll();
    QString server_message;
    server_message.append(data);
    int i = 0;
    while(server_message.indexOf("%", i) > -1){
        process_command(server_message.mid(server_message.indexOf("%", i)));
        ++i;
    }
}

void BISON_View::process_command(QString command)
{
    qDebug() << command;
    if(command.mid(0,3) == "%L "){
        if(command.mid(3,1) == "1"){
            logged_in = true;
        }else if(command.mid(3,1) == "0"){
            logged_in = false;
            qDebug() << "Logged Out";
        }
        update_login();
    }else if(command.mid(0,3) == "%LR"){

    }else if(command.mid(0,3) == "%D "){
        QChar id = command.at(3).toLatin1();
        qint8 val = id.unicode();
        switch(val){
            case 85:
                {
                QString user_info;
                user_info.append(command);
                emit user_update(user_info);
                break;
                }
            case 71:
                {
                    if(command.mid(5,1) == "1"){
                        go_status = true;
                    }else{
                        go_status = false;
                    }
                    update_go();
                    break;
                }
            case 73:
                {
                    qDebug() << "73";
                    QString path;
                    path.append(command.mid(5,-1));
                    emit new_image(path);
                }
            default:
                qDebug() << "Error: Unknown Identifier\n";
                break;
        }
    }else{
        qDebug() << "Error: Unkown Command\n";
    }
}

void BISON_View::connect_to_server(QString ip)
{
    if(tcp_sock->isOpen()){
        tcp_sock->close();
    }
    QHostAddress server;
    server.setAddress(ip);
    tcp_sock->connectToHost(server, port_num);
    if(tcp_sock->isOpen()){
        qDebug() << "Socket connected.";
        serverRefresh->start(1000);
    }else{
        qDebug() << "Socket could not connect.";
    }
}

void BISON_View::timeToRefresh()
{
    QString message = "%LR";
    QByteArray data;
    data.append(message);
    tcp_sock->write(data);
    tcp_sock->flush();
    tcp_sock->waitForBytesWritten(3000);
    serverRefresh->start(1000);
}

void BISON_View::server_disconnect()
{
    go_status=false;
    update_go();
    logged_in=false;
    update_login();
}

void BISON_View::image_processing_button_push(int num)
{
    QString message = "%D I ";
    message.append(QString::number(num));
    QByteArray data;
    data.append(message);
    tcp_sock->write(data);
    tcp_sock->flush();
    tcp_sock->waitForBytesWritten(3000);
}
