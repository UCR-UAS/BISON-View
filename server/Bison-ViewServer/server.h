#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <vector>
#include <QFile>
#include <QTextStream>
#include "thread.h"
#include "user.h"

class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = 0);
    void startServer();

signals:
   void login_response(int sock_num, int index);
   void server_message(QString message);
public slots:
   void login(QString uname, QString pass, int sock_num);
   void logout(int user_index);
   void go_change(int user_index, bool status);
private:
   std::vector<User> user_list;
   void load_users();
protected:
    void incomingConnection(qintptr socketDescriptor);
};

#endif // SERVER_H
