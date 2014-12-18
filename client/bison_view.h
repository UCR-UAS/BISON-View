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
#include <QTcpSocket>
#include <QUdpSocket>
#include <QDebug>

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
    QWidget *mission_commander_tab;
    QWidget *telemetry_tab;
    QWidget *image_processing_tab;
    QWidget *mission_tab;
    QWidget *autopilot_tab;
    bool go_status;
    bool logged_in;
    int role;
    QTcpSocket *tcp_sock;
    void update_login();
    void update_role();

private slots:
    void go_press();
    void on_actionWhat_s_this_triggered();
    void on_actionBISON_View_Help_triggered();
    void on_commandLinkButton_clicked();
    void broadcast_tcp();
    void process_pending_tcp();
    void on_comboBox_currentIndexChanged(int index);
};

#endif // BISON_VIEW_H
