#ifndef SET_SERVER_H
#define SET_SERVER_H

#include <QDialog>

namespace Ui {
class set_server;
}

class set_server : public QDialog
{
    Q_OBJECT

public:
    explicit set_server(QWidget *parent = 0);
    ~set_server();

private:
    Ui::set_server *ui;
};

#endif // SET_SERVER_H
