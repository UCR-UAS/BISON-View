#include "mission.h"
#include "ui_mission.h"

mission::mission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mission)
{
    ui->setupUi(this);
    ui->EggX->setPlaceholderText("X-Coord");
    ui->EggY->setPlaceholderText("Y-Coord");
    ui->Uname->setPlaceholderText("Upload Username");
    ui->Pass->setPlaceholderText("Upload Password");
}

mission::~mission()
{
    delete ui;
}
