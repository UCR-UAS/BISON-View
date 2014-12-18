#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>

class Thread : public QThread
{
    Q_OBJECT
public:
    explicit Thread(int ID, QObject *parent = 0);
    void run();
    char login(QString credentials);
signals:
    void error(QTcpSocket::SocketError socketError);
public slots:
    void readyRead();
    void disconnected();
private:
    QTcpSocket *socket;
    int socketDescriptor;
    bool logged_in;
};

#endif // THREAD_H
