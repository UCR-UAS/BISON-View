#include "mission_commander.h"
#include "ui_mission_commander.h"

mission_commander::mission_commander(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mission_commander)
{
    ui->setupUi(this);
}

mission_commander::~mission_commander()
{
    delete ui;
}
