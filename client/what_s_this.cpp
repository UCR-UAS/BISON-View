#include "what_s_this.h"
#include "ui_what_s_this.h"

what_s_this::what_s_this(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::what_s_this)
{
    ui->setupUi(this);
}

what_s_this::~what_s_this()
{
    delete ui;
}
