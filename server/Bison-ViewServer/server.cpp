#include "server.h"
#include "thread.h"

using namespace std;

Server::Server(QObject *parent) :
    QTcpServer(parent)
{
    QFile text("/home/cody/Desktop/code/BISON-clone/BISON-View/server/Bison-ViewServer/users.txt");
    text.open(QIODevice::ReadOnly);
    QTextStream textStream(&text);

    while(true){
        QString input = textStream.readLine();
        if(input.isNull()){
            break;
        }
        else{
            int space = input.indexOf(" ");
            QString uname = input.mid(0, space);
            QString pass = input.mid(space + 1);
            qDebug() << uname << pass;
            User temp(uname, pass);
            user_list.push_back(temp);
        }
    }
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

int Server::login(QString uname, QString pass){
    for(unsigned i=0;i<user_list.size();++i){
        if(user_list.at(i).login(uname, pass)){
            qDebug() << "Login Successful";
            return(i);
        }
    }
    qDebug() << "Login Failed";
    return(-1);
}

void Server::logout(int user_index){
    user_list.at(user_index).logout();
}

void Server::go_change(int user_index, bool status){
    user_list.at(user_index).set_go_status(status);
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    Thread *connection = new Thread(socketDescriptor, this);
    qDebug() << "<" << socketDescriptor << "> Connecting.....";
    connect(connection, SIGNAL(finished()), connection, SLOT(deleteLater()));
    connect(connection, SIGNAL(login_main()), this, SLOT(login()));
    connect(connection, SIGNAL(logout_main()), this, SLOT(logout()));
    connect(connection, SIGNAL(go_status_update()), this, SLOT(go_change()));
    connection->start();
}

