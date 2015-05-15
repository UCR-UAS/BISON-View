#ifndef CONNECTION_H
#define CONNECTION_H

#include <QObject>
#include <QTcpSocket>
#include <QTimer>

class connection : public QObject
{
    Q_OBJECT
public:
    explicit connection(qintptr, QObject *my_server, QObject *parent = 0);
    void login(QString credentials);
    bool is_logged_in();
    int get_user_num();
signals:
    void login_main(QString uname, QString pass, int sock_num);
    void logout_main(int user_index);
    void go_status_update(int user_index, bool status);
    void role_update(int user_index, int new_role);
    void error(QTcpSocket::SocketError socket_error);
    void client_disconnect(connection *client);
    void info_request(int sock_num);
public slots:
    void welcome(int sock);
    void login_listen(int sock, int index);
    void server_message(QString message, int sock_num);
    void readyRead();
    void disconnected();
    void login_timedout();
private:
    QTcpSocket *socket;
    int socketDescriptor;
    bool logged_in;
    int curr_user;
    QTimer *time_out;
    void logout();
    void login_refresh();
    int image_index;
    QString pics[5];
};

#endif // CONNECTION_H
