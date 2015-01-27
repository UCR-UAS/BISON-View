#include "server.h"

using namespace std;

Server::Server(QObject *parent) :
    QTcpServer(parent)
{
    /*QFile text("/home/cody/Desktop/code/BISON-clone/BISON-View/server/Bison-ViewServer/users.txt");
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
    }*/
    QString uname = "bho";
    QString pass = "12345";
    qDebug() << uname << pass;
    User user1(uname, pass);
    user_list.push_back(user1);
    uname = "blu";
    pass = "12345";
    qDebug() << uname << pass;
    User user2(uname, pass);
    user_list.push_back(user2);
    uname = "csimons";
    pass = "12345";
    qDebug() << uname << pass;
    User user3(uname, pass);
    user_list.push_back(user3);
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
            emit login_response(sock_num, i);
            QString message = "%U ";
            message.append(user_list.at(i).get_username());
            message.append(" /G");
            message.append(user_list.at(i).get_go());
            message.append("/R");
            message.append(user_list.at(i).get_role());
            emit server_message(message, -1);
            return;
        }
    }
    emit login_response(sock_num, -1);
}

void Server::logout(int user_index){
    user_list.at(user_index).logout();
    QString message = "%UL ";
    message.append(user_list.at(user_index).get_username());
    emit server_message(message, -1);
}

void Server::go_change(int user_index, bool status){
    user_list.at(user_index).set_go_status(status);
    QString message = "%U ";
    message.append(user_list.at(user_index).get_username());
    message.append(" /G");
    message.append(user_list.at(user_index).get_go());
    message.append("/R");
    message.append(user_list.at(user_index).get_role());
    emit server_message(message, -1);
}

void Server::role_change(int user_index, int new_role)
{
    user_list.at(user_index).set_role(new_role);
    QString message = "%U ";
    message.append(user_list.at(user_index).get_username());
    message.append(" /G");
    message.append(user_list.at(user_index).get_go());
    message.append("/R");
    message.append(user_list.at(user_index).get_role());
    emit server_message(message, -1);
}

void Server::info_request(int sock_num)
{
    qDebug() << "New User needs info";
    QString message;
    for(unsigned i=0;i<user_list.size();++i){
        if(user_list.at(i).is_logged_in()){
            message.append("%U ");
            message.append(user_list.at(i).get_username());
            message.append(" /G");
            message.append(user_list.at(i).get_go());
            message.append("/R");
            message.append(user_list.at(i).get_role());
        }
        emit server_message(message, sock_num);
    }
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    qDebug() << "<" << socketDescriptor << "> Connecting.....";
    connection *c = new connection(socketDescriptor, this);
    connect(c, SIGNAL(login_main(QString, QString, int)), this, SLOT(login(QString, QString, int)), Qt::QueuedConnection);
    connect(c, SIGNAL(logout_main(int)), this, SLOT(logout(int)),Qt::QueuedConnection);
    connect(c, SIGNAL(go_status_update(int, bool)), this, SLOT(go_change(int, bool)),Qt::QueuedConnection);
    connect(c, SIGNAL(role_update(int,int)), this, SLOT(role_change(int, int)), Qt::QueuedConnection);
    connect(c, SIGNAL(client_disconnect(connection*)), this, SLOT(client_disconnect(connection*)), Qt::QueuedConnection);
    connect(c, SIGNAL(info_request(int)), this, SLOT(info_request(int)), Qt::QueuedConnection);
    emit welcome(socketDescriptor);
}

void Server::client_disconnect(connection *client)
{
    if(client->is_logged_in()){
        user_list.at(client->get_user_num()).logout();
    }
    client->deleteLater();
}

