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

    // user listing test
    for (int i = 0; i < 5; i++) {
        QListWidgetItem* brandon = new QListWidgetItem("Brandon");
        brandon->setForeground(Qt::red);
        brandon->setBackground(Qt::green);
        list[0]->addItem(brandon);
    }
    list[1]->addItem("Brandon");
    list[2]->addItem("Brandon");
    list[3]->addItem("Brandon");
    list[4]->addItem("Brandon");
    list[5]->addItem("Brandon");

}

Go_NoGo::~Go_NoGo()
{
    for (int i = 0; i < MAX_TEAMS; i++) {
        delete list[i];
        delete label[i];
    }
    delete grid;
}
