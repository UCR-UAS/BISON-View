#include "set_server.h"
#include "ui_set_server.h"

set_server::set_server(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::set_server)
{
    ui->setupUi(this);
}

set_server::~set_server()
{
    delete ui;
}

void set_server::on_pushButton_2_clicked()
{
    done(0);
}

void set_server::on_pushButton_clicked()
{
    if(loopback){
        emit(ip_out("127.0.0.1"));
    }else{
        QString address;
        address = ui->lineEdit->text();
        emit(ip_out(address));
    }
    done(0);
}

void set_server::on_checkBox_clicked(bool checked)
{
    loopback = checked;
}
