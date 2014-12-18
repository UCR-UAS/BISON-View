#include <QCoreApplication>
#include "server.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Server bisonServer;
    bisonServer.startServer();

    return a.exec();
}
