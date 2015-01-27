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
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()),Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);
    qDebug() << "<" << this->socketDescriptor << "> Client connected.";

    connect(my_server, SIGNAL(welcome(int)), this, SLOT(welcome(int)), Qt::QueuedConnection);
    connect(my_server, SIGNAL(login_response(int, int)), this, SLOT(login_listen(int,int)), Qt::QueuedConnection);
    connect(my_server, SIGNAL(server_message(QString, int)), this, SLOT(server_message(QString, int)), Qt::QueuedConnection);
    connect(my_server, SIGNAL(user_info(QString, int)), this, SLOT(server_message(QString, int)), Qt::QueuedConnection);
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
    logged_in = false;
    curr_user = -1;
    QString  message = "%L 0";
    QByteArray data;
    data.append(message);
    socket->write(data);
    socket->flush();
    socket->waitForBytesWritten();
    emit logout_main(curr_user-1);
}

void connection::readyRead()
{
    QByteArray data = socket->readAll();

    qDebug() << "<" << this->socketDescriptor << "> Data in:" << data;

    if(data.mid(0,3) == "%L "){
        QString credentials = data;
        login(data);
    }else if(data.mid(0,3) == "%LO"){
        logout();
    }else if(data.mid(0,3) == "%E"){
        disconnected();
    }else if(data.mid(0,3) == "%G "){
        if(logged_in){
            QString message;
            if(data.mid(3) == "1"){
                emit go_status_update(curr_user, true);
                message = "%G 1";
                qDebug() << message;
            }else if(data.mid(3) == "0"){
                emit go_status_update(curr_user, false);
                message = "%G 0";
                qDebug() << message;
            }
            data.clear();
            data.append(message);
            socket->write(data);
            socket->flush();
            socket->waitForBytesWritten(3000);
         }
    }else if(data.mid(0,3) == "%R "){
        if(logged_in){
            QString message = "%R ";
            int new_role = data.mid(3).toInt();
            emit role_update(curr_user, new_role);
            data.clear();
            data.append(message);
            socket->write(data);
            socket->flush();
            socket->waitForBytesWritten(3000);
         }
    }else{
        socket->write(data);
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
