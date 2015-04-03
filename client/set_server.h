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

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_checkBox_clicked(bool checked);

private:
    Ui::set_server *ui;
    bool loopback = false;
signals:
    void ip_out(QString Ip);
};

#endif // SET_SERVER_H
