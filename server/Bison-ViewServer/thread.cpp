#include "thread.h"

Thread::Thread(int ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
    logged_in = false;
    curr_user = -1;
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

void Thread::login(QString credentials){
    int space = credentials.indexOf(" ", 3);
    int newline = credentials.indexOf("\n");
    QString uname = credentials.mid(3,(space - 3));
    QString pass = credentials.mid((space + 1),(newline - space));
    curr_user = emit login_main(uname, pass);
    if(curr_user > -1){
        logged_in = true;
        QString message = "%L 1";
        QByteArray data;
        data.append(message);
        socket->write(data);
        socket->flush();
        socket->waitForBytesWritten(3000);
        emit
    }else{
        QString message = "%L 0";
        QByteArray data;
        data.append(message);
        socket->write(data);
        socket->flush();
        socket->waitForBytesWritten(3000);
    }
}


void Thread::readyRead()
{
    QByteArray data = socket->readAll();

    qDebug() << "<" << this->socketDescriptor << "> Data in:" << data;

    if(data.mid(0,3) == "%L "){
        QString credentials = data;
        login(data);
    }else if(data.mid(0,3) == "%LO"){
        emit logout_main(curr_user);
        logged_in = false;
        curr_user = -1;
        QString  message = "%L 0";
        QByteArray data;
        data.append(message);
        socket->write(data);
        socket->flush();
        socket->waitForBytesWritten();
    }else if(data.mid(0,3) == "%E"){
        disconnected();
    }else if(data.mid(0,3) == "%G "){
        if(logged_in){
            QString message;
            if(data.mid(3) == "1"){
                emit go_status_update(curr_user, true);
                message = "%G 1";
                qDebug() << message;
            }else if(data.mid(3) == "0"){
                emit go_status_update(curr_user, false);
                message = "%G 0";
                qDebug() << message;
            }
            data.clear();
            data.append(message);
            socket->write(data);
            socket->flush();
            socket->waitForBytesWritten(3000);
         }
    }else{
        socket->write(data);
        socket->flush();
        socket->waitForBytesWritten(3000);
    }


}

void Thread::disconnected()
{
    if(logged_in){
        emit logout_main(curr_user);
    }
    qDebug() << "<" << this->socketDescriptor << "> Client disconnected.";
    socket->deleteLater();
    exit(0);
}
