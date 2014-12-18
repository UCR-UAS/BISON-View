#ifndef WHAT_S_THIS_H
#define WHAT_S_THIS_H

#include <QDialog>

namespace Ui {
class what_s_this;
}

class what_s_this : public QDialog
{
    Q_OBJECT

public:
    explicit what_s_this(QWidget *parent = 0);
    ~what_s_this();

private slots:
    void on_pushButton_clicked();

private:
    Ui::what_s_this *ui;
};

#endif // WHAT_S_THIS_H
