#include "server.h"
#include "thread.h"

Server::Server(QObject *parent) :
    QTcpServer(parent)
{
    usernames[0] = "blu";
    usernames[1] = "bho";
    passwords[0] = "banana_l";
    passwords[1] = "banana_h";
}

void Server::startServer()
{
    if(!this->listen(QHostAddress::Any, 1234)){
        qDebug() << "Server not Started!";
    }else{
        qDebug() << "Server Started.";
        qDebug() << "Listening.....";
    }
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    Thread *connection = new Thread(socketDescriptor, this);
    qDebug() << "<" << socketDescriptor << "> Connecting.....";
    connect(connection, SIGNAL(finished()), connection, SLOT(deleteLater()));
    connection->start();
}

