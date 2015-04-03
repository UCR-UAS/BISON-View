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
