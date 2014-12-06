#include "telemetry.h"
#include "ui_telemetry.h"

telemetry::telemetry(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::telemetry)
{
    ui->setupUi(this);
}

telemetry::~telemetry()
{
    delete ui;
}
