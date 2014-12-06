#include "mission.h"
#include "ui_mission.h"

mission::mission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mission)
{
    ui->setupUi(this);
}

mission::~mission()
{
    delete ui;
}
