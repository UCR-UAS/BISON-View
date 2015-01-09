#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <vector>
#include "user.h"
class Thread : public QThread
{
    Q_OBJECT
public:
    explicit Thread(int ID, QObject *parent = 0);
    void run();
    void login(QString credentials);
signals:
    void login_main(QString uname, QString pass, int sock_num);
    void logout_main(int user_index);
    void go_status_update(int user_index, bool status);
    void error(QTcpSocket::SocketError socket_error);
public slots:
    void login_listen(int sock, int index);
    void server_message(QString message);
    void readyRead();
    void disconnected();
private:
    QTcpSocket *socket;
    int socketDescriptor;
    bool logged_in;
    int curr_user;
};

#endif // THREAD_H
