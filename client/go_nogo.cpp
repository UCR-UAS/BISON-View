#include "go_nogo.h"
#include <QDebug>

Go_NoGo::Go_NoGo(QWidget *parent) :
    QWidget(parent)
{
    grid = new QGridLayout(this);

    // init display
    for (int i = 0; i < MAX_TEAMS; i++) {
        // initialize label
        label[i] = new QLabel(this);
        label[i]->setText(TEAM_NAMES[i]);
        grid->addWidget(label[i], 0, i, 1, 1);
        // initialize lists
        list[i] = new QListWidget(this);
        grid->addWidget(list[i], 1, i, 1, 1);
    }

}

Go_NoGo::~Go_NoGo()
{
    for (int i = 0; i < MAX_TEAMS; i++) {
        delete list[i];
        delete label[i];
    }
    delete grid;
}

void Go_NoGo::user_update(QString data){
    int end_uname = data.indexOf(" /");
    QString uname = data.mid(3,end_uname-3);
    int gStat = data.mid(end_uname+3,1).toInt();
    int role = data.mid(end_uname+6,1).toInt();
    qDebug() << uname << gStat << role;
}
