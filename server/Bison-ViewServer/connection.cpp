#include "connection.h"
#include <server.h>

connection::connection(qintptr ID, QObject *my_server, QObject *parent) :
    QObject(parent)
{
    socketDescriptor = ID;
    logged_in = false;
    curr_user = -1;
    socket = new QTcpSocket();
    if(!socket->setSocketDescriptor(this->socketDescriptor)){
        emit error(socket->error());
        return;
    }
    time_out = new QTimer(this);
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()),Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);
    qDebug() << "<" << this->socketDescriptor << "> Client connected.";
    connect(time_out, SIGNAL(timeout()), this, SLOT(login_timedout()));
    connect(my_server, SIGNAL(welcome(int)), this, SLOT(welcome(int)), Qt::QueuedConnection);
    connect(my_server, SIGNAL(login_response(int, int)), this, SLOT(login_listen(int,int)), Qt::QueuedConnection);
    connect(my_server, SIGNAL(server_message(QString, int)), this, SLOT(server_message(QString, int)), Qt::QueuedConnection);
    connect(my_server, SIGNAL(user_info(QString, int)), this, SLOT(server_message(QString, int)), Qt::QueuedConnection);
    time_out->start(5000);
    image_index=0;
    pics[0]="/home/cody/Pictures/xkcd/journal_4.png";
    pics[1]="/home/cody/Pictures/xkcd/linux_user_at_best_buy.png";
    pics[2]="/home/cody/Pictures/xkcd/networking.png";
    pics[3]="/home/cody/Pictures/xkcd/a_softer_robot.png";
    pics[4]="/home/cody/Pictures/xkcd/bee_orchid.png";
}

void connection::welcome(int sock){
    if(this->socketDescriptor == sock)
    {
        QByteArray message;
        message.append("Welcome Client");
        socket->write(message);
        socket->flush();
        socket->waitForBytesWritten(3000);
        emit info_request(this->socketDescriptor);
    }
}

void connection::login(QString credentials){
    int space = credentials.indexOf(" ", 3);
    int newline = credentials.indexOf("\n");
    QString uname = credentials.mid(3,(space - 3));
    QString pass = credentials.mid((space + 1),(newline - space));
    emit login_main(uname, pass, socketDescriptor);
}

bool connection::is_logged_in(){
    return(logged_in);
}

int connection::get_user_num(){
    return(curr_user);

}

void connection::login_listen(int sock, int index){
    if(socketDescriptor == sock){
        curr_user = index;
        if(curr_user > -1){
            qDebug() << "<" << this->socketDescriptor << "> logged in as user " << curr_user;
            logged_in = true;
            QString message = "%L 1";
            QByteArray data;
            data.clear();
            data.append(message);
            socket->write(data);
            socket->flush();
            socket->waitForBytesWritten(3000);
        }else{
            QString message = "%L 0";
            QByteArray data;
            data.append(message);
            socket->write(data);
            socket->flush();
            socket->waitForBytesWritten(3000);
        }
    }
}

void connection::logout(){
    if(logged_in)
    {
        emit logout_main(curr_user);
        logged_in = false;
        curr_user = -1;
        QString  message = "%L 0";
        QByteArray data;
        data.append(message);
        socket->write(data);
        socket->flush();
        socket->waitForBytesWritten();
     }
}

void connection::readyRead()
{
    QByteArray raw_data = socket->readAll();
    qDebug() << "<" << this->socketDescriptor << "> Data in:" << raw_data;
    QString data;
    data.append(raw_data);
    if(data.mid(0,3) == "%L "){
        QString credentials = data;
        login(data);
    }else if(data.mid(0,3) == "%LO"){
        logout();
    }else if(data.mid(0,3) == "%LR"){
        login_refresh();
    }else if(data.mid(0,3) == "%D "){
       QChar id = data.at(3).toLatin1();
       qint8 val = id.unicode();
       switch(val){
           case 71:
               {
                  if(logged_in){
                      QString message;
                      if(data.mid(5) == "1"){
                         emit go_status_update(curr_user, true);
                         message = "%D G 1";
                         qDebug() << message;
                      }else if(data.mid(5) == "0"){
                         emit go_status_update(curr_user, false);
                         message = "%D G 0";
                         qDebug() << message;
                      }
                  raw_data.clear();
                  raw_data.append(message);
                  socket->write(raw_data);
                  socket->flush();
                  socket->waitForBytesWritten(3000);
                }
                break;
               }
            case 82:
                {
                    if(logged_in){
                        QString message = "%D R ";
                        int new_role = data.mid(5).toInt();
                        emit role_update(curr_user, new_role);
                        raw_data.clear();
                        raw_data.append(message);
                        socket->write(raw_data);
                        socket->flush();
                        socket->waitForBytesWritten(3000);
                     }
                     break;
                }
            case 73:
                {
                    QChar button = data.at(5).toLatin1();
                    qint8 button_num = button.unicode() - 48;
                    switch(button_num){
                        case 0:
                            {
                                image_index=0;
                                break;
                            }
                        case 1:
                            {
                                image_index--;
                                if(image_index<0)
                                {
                                    image_index=0;
                                }
                                break;
                            }
                        case 2:
                            {
                                image_index++;
                                if(image_index>4)
                                {
                                    image_index=4;
                                }
                                break;
                            }
                        case 3:
                            {
                                image_index=4;
                                break;
                            }
                        case 4:
                            {
                                break;
                            }
                        case 5:
                            {
                                break;
                            }
                        case 9:
                            {
                                image_index=0;
                                break;
                            }
                        default:
                            break;
                    }
                    raw_data.clear();
                    raw_data.append(pics[image_index]);
                    socket->write(raw_data);
                    socket->flush();
                    socket->waitForBytesWritten(3000);
                    break;
                }
            default:
                qDebug() << "Error: Unknown Identifier\n";
                break;
        }
    }else{
        socket->write(raw_data);
        socket->flush();
        socket->waitForBytesWritten(3000);
    }


}

void connection::server_message(QString message, int sock_num)
{
    if(sock_num == this->socketDescriptor || sock_num == -1){
        qDebug() << "<" << this->socketDescriptor << "> writing:" << message;
        QByteArray data;
        data.append(message);
        socket->write(data);
        socket->flush();
        socket->waitForBytesWritten(3000);
    }
}

void connection::disconnected()
{
    qDebug() << "<" << this->socketDescriptor << "> Client disconnected.";
    socket->deleteLater();
    emit client_disconnect(this);
}

void connection::login_timedout()
{
    logout();
    disconnect();
}

void connection::login_refresh()
{
    time_out->start(5000);
}
