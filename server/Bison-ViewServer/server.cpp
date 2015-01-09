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

void Server::login(QString uname, QString pass, int sock_num){
    for(unsigned i=0;i<user_list.size();++i){
        if(user_list.at(i).login(uname, pass)){
            qDebug() << "Login Successful";
            emit login_response(sock_num, i);
            QString message = "%U ";
            message.append(user_list.at(i).get_username());
            message.append(" /G");
            message.append(user_list.at(i).get_go());
            message.append("/R");
            message.append(user_list.at(i).get_role());
            qDebug() << message;
            emit server_message(message);
            return;
        }
    }
    qDebug() << "Login Failed";
    emit login_response(sock_num, -1);
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
    connect(connection, SIGNAL(login_main(QString, QString, int)), this, SLOT(login(QString, QString, int)), Qt::QueuedConnection);
    connect(connection, SIGNAL(logout_main(int)), this, SLOT(logout(int)),Qt::QueuedConnection);
    connect(connection, SIGNAL(go_status_update(int, bool)), this, SLOT(go_change(int, bool)),Qt::QueuedConnection);
    connection->start();
}

