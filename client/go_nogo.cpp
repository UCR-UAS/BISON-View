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
    if(data.mid(3,2) == "UL"){
        int end_uname = data.indexOf(" /");
        QString uname = data.mid(6,end_uname-5);
        remove_old(uname);
    }else{
        int end_uname = data.indexOf(" /");
        QString uname = data.mid(5,end_uname-5);
        int gStat = data.mid(end_uname+3,1).toInt();
      int role = data.mid(end_uname+6,1).toInt();
      int current = check_role(uname, role);
       if(current > -1){
           if(gStat){
             list[role]->item(current)->setBackground(Qt::green);
          }else{
               list[role]->item(current)->setBackground(Qt::red);
            }
      }else{
          remove_old(uname);
          QListWidgetItem* new_user = new QListWidgetItem(uname);
           new_user->setForeground(Qt::black);
          if(gStat){
              new_user->setBackground(Qt::green);
          }else{
             new_user->setBackground(Qt::red);
         }
        list[role]->addItem(new_user);
        }
    }
}

void Go_NoGo::remove_old(QString uname)
{
    for(unsigned i=0;i<MAX_TEAMS;++i){
        if(list[i]->count() != 0){
            for(unsigned j=0;j<list[i]->count();++j){
                if(list[i]->item(j)->text() == uname)
                {
                    list[i]->takeItem(j);
                }
            }
        }
    }
}

int Go_NoGo::check_role(QString uname, int role)
{
    for(unsigned i=0;i<list[role]->count();++i){
        if(list[role]->item(i)->text() == uname)
        {
            return(i);
        }
    }
    return(-1);
}

