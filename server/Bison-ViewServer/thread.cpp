#include "thread.h"

Thread::Thread(int ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
    logged_in = false;
}

void Thread::run()
{
    qDebug() << "<" << this->socketDescriptor << "> Starting thread....";
    socket = new QTcpSocket();
    if(!socket->setSocketDescriptor(this->socketDescriptor)){
        emit error(socket->error());
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()),Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);

    qDebug() << "<" << this->socketDescriptor << "> Client connected.";

    socket->write("Welcome client\r\n\r\n");
    socket->flush();
    socket->waitForBytesWritten(3000);

    exec();
}

char Thread::login(QString credentials){
    int space = credentials.indexOf(" ", 3);
    int newline = credentials.indexOf("\n");
    QStringRef name = credentials.midRef(3,(space - 3));
    QStringRef pass = credentials.midRef((space + 1),(newline - space));
    qDebug() << "Name: " << name << " Pass: " << pass;
    qDebug() << "Login Valid";
    logged_in = true;
    return('1');
}


void Thread::readyRead()
{
    QByteArray data = socket->readAll();

    qDebug() << "<" << this->socketDescriptor << "> Data in:" << data;

    if(data.mid(0,2) == "%L"){
        QString credentials = data;
        char response = login(data);
        data.clear();
        data.append("%L " + response);
        socket->write(data);
        socket->flush();
        socket->waitForBytesWritten(3000);
    }else if(data.mid(0,2) == "%E"){
        disconnected();
    }else if(data.mid(0,3) == "%LO"){
        data.clear();
        data.append("%L 0");
        logged_in = false;
        qDebug() << "Logged out";
        socket->write(data);
        socket->flush();
        socket->waitForBytesWritten(3000);
    }else{
        socket->write(data);
        socket->flush();
        socket->waitForBytesWritten(3000);
    }


}

void Thread::disconnected()
{
    qDebug() << "<" << this->socketDescriptor << "> Client disconnected.";
    socket->deleteLater();
    exit(0);
}
