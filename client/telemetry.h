#ifndef TELEMETRY_H
#define TELEMETRY_H

#include <QWidget>

namespace Ui {
class telemetry;
}

class telemetry : public QWidget
{
    Q_OBJECT

public:
    explicit telemetry(QWidget *parent = 0);
    ~telemetry();

private:
    Ui::telemetry *ui;
};

#endif // TELEMETRY_H
