/* Engineer: Brandon Lu (blu006@ucr.edu)
 * Organization: UCR SUAS
 * Project: BISON-View
 * Filename: bison_view.h
 * Description:
 * This is the header file for the main BISON-View window.
 */

#ifndef BISON_VIEW_H
#define BISON_VIEW_H

#include <QMainWindow>

namespace Ui {
class BISON_View;
}

class BISON_View : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit BISON_View(QWidget *parent = 0);
    void server_connect_acc();
    ~BISON_View();
    
private:
    Ui::BISON_View *ui;
    QWidget *go_nogo_tab;
    QWidget *message_tab;
    bool go_status;

private slots:
    void go_press();

};

#endif // BISON_VIEW_H
