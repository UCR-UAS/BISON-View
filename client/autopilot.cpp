#include "autopilot.h"
#include "ui_autopilot.h"

autopilot::autopilot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::autopilot)
{
    ui->setupUi(this);
}

autopilot::~autopilot()
{
    delete ui;
}
