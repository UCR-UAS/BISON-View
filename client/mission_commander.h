#ifndef MISSION_COMMANDER_H
#define MISSION_COMMANDER_H

#include <QWidget>

namespace Ui {
class mission_commander;
}

class mission_commander : public QWidget
{
    Q_OBJECT

public:
    explicit mission_commander(QWidget *parent = 0);
    ~mission_commander();

private:
    Ui::mission_commander *ui;
};

#endif // MISSION_COMMANDER_H
