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
#include <QTimer>
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
    QTimer *serverRefresh;
    bool go_status;
    bool logged_in;
    int role;
    QTcpSocket *tcp_sock;
    int port_num = 1234;
    int debug_var = 0;
    void update_login();
    void update_role();
    void update_go();
    void process_command(QString);

private slots:
    void go_press();
    void on_actionWhat_s_this_triggered();
    void on_actionBISON_View_Help_triggered();
    void on_commandLinkButton_clicked();
    void broadcast_tcp();
    void process_pending_tcp();
    void on_comboBox_currentIndexChanged(int index);
    void on_actionSet_Server_triggered();
    void connect_to_server(QString);
    void timeToRefresh();
    void server_disconnect();
    void image_processing_button_push(int);
signals:
    void user_update(QString);
    void user_logout(QString);
    void new_image(QString);
};

#endif // BISON_VIEW_H
