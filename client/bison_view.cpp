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

BISON_View::BISON_View(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BISON_View)
{
    // run premade UI setup
    ui->setupUi(this);

    //show menu bar
    ui->menuBar->show();

    // initialize tabs
    message_tab = new welcome_message(this);
    go_nogo_tab = new Go_NoGo(this);
    mission_commander_tab = new mission_commander(this);
    mission_commander_tab->hide();
    telemetry_tab = new telemetry(this);
    telemetry_tab->hide();
    image_processing_tab = new image_processing(this);
    image_processing_tab->hide();
    mission_tab = new mission(this);
    mission_tab->hide();
    autopilot_tab = new autopilot(this);
    autopilot_tab->hide();

    // initialize go/no go
    go_status = true;
    go_press();
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

    // initialize text fields
    ui->lineEdit->setPlaceholderText("Username");
    ui->lineEdit->setEnabled(true);
    ui->lineEdit_2->setPlaceholderText("Password");
    ui->lineEdit_2->setEnabled(true);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);

    // initialize signals
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(go_press()));

    // initialize sockets
    tcp_sock = new QTcpSocket(this);
    QHostAddress server;
    server.setAddress("127.0.0.1");
    tcp_sock->connectToHost(server, 1234);
    if(tcp_sock->isOpen()){
        qDebug() << "Socket connected.";
    }else{
        qDebug() << "Socket could not connect.";
    }
    connect(tcp_sock, SIGNAL(readyRead()), this, SLOT(process_pending_tcp()));
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

   if (go_status) {
       ui->pushButton->setStyleSheet("color: red;");
       ui->pushButton->setText("No &Go!");
   } else {
       ui->pushButton->setStyleSheet("color: darkgreen;");
       ui->pushButton->setText("&Go!");
   }
   go_status = !go_status;
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
        ui->comboBox->setEnabled(false);
        ui->comboBox->setStyleSheet("color: grey");
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
}

void BISON_View::broadcast_tcp()
{

}

void BISON_View::process_pending_tcp()
{
    QByteArray data = tcp_sock->readAll();
    if(data.mid(0,2) == "%L"){
        qDebug() << data;
        if(data.mid(3) == "1"){
            logged_in = true;
        }else if(data.mid(3) == "0"){
            logged_in = false;
        }
        update_login();
    }
}

