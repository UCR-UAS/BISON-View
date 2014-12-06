#ifndef AUTOPILOT_H
#define AUTOPILOT_H

#include <QWidget>

namespace Ui {
class autopilot;
}

class autopilot : public QWidget
{
    Q_OBJECT

public:
    explicit autopilot(QWidget *parent = 0);
    ~autopilot();

private:
    Ui::autopilot *ui;
};

#endif // AUTOPILOT_H
