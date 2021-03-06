/* Engineer: Brandon Lu (blu006@ucr.edu)
 * Organization: UCR SUAS
 * Project: BISON-View
 * Filename: go_nogo.h
 * Description:
 * This is the header file for our Go / No Go interface.
 */

#ifndef GO_NOGO_H
#define GO_NOGO_H

#include <QGridLayout>
#include <QLabel>
#include <QListWidget>
#include <QWidget>
#include "BISON.h"

namespace Ui {
class Go_NoGo;
}

class Go_NoGo : public QWidget
{
    Q_OBJECT
    
public:
    explicit Go_NoGo(QWidget *parent = 0);
    ~Go_NoGo();

public slots:
    void user_update(QString);
    void remove_old(QString);
private:
    QGridLayout *grid;
    QListWidget *list[MAX_TEAMS];
    QLabel *label[MAX_TEAMS];

    int check_role(QString, int);
};

#endif // GO_NOGO_H
