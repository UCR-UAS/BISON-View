#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include "thread.h"

class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = 0);
    void startServer();

signals:

public slots:

private:
   QString usernames[2];
   QString passwords[2];
protected:
    void incomingConnection(qintptr socketDescriptor);
};

#endif // SERVER_H
