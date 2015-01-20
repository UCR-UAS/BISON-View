#ifndef CONNECTION_H
#define CONNECTION_H

#include <QObject>

class connection : public QObject
{
    Q_OBJECT
public:
    explicit connection(QObject *parent = 0);

signals:

public slots:

};

#endif // CONNECTION_H
