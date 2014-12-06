#ifndef MISSION_H
#define MISSION_H

#include <QWidget>

namespace Ui {
class mission;
}

class mission : public QWidget
{
    Q_OBJECT

public:
    explicit mission(QWidget *parent = 0);
    ~mission();

private:
    Ui::mission *ui;
};

#endif // MISSION_H
