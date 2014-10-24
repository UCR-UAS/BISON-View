/* Engineer: Brandon Lu (blu006@ucr.edu)
 * Organization: UCR SUAS
 * Project: BISON-View
 * Filename: bison_view.cpp
 * Description:
 * This is the main file for the BISON View main window.
 */

#include <QDebug>
#include <QPalette>
#include "BISON.h"
#include "bison_view.h"
#include "ui_bison_view.h"
#include "go_nogo.h"
#include "welcome_message.h"

BISON_View::BISON_View(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BISON_View)
{
    // run premade UI setup
    ui->setupUi(this);

    // initialize tabs
    message_tab = new welcome_message(this);
    go_nogo_tab = new Go_NoGo(this);

    // initialize buttons
    go_status = true;
    go_press();

    // add tabs
    ui->tabWidget->insertTab(0, message_tab, "System &Message");
    ui->tabWidget->insertTab(1, go_nogo_tab, "G&o / NoGo");

    // comboBox items
    for (int i = 0; i < MAX_TEAMS; i++) {
        ui->comboBox->insertItem(i, TEAM_NAMES[i], i);
    }

    // initialize text fields
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit->setText("Username");
    ui->lineEdit_2->setText("Password");

    // initialize signals
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(go_press()));

}

BISON_View::~BISON_View()
{
    delete ui;
}

void BISON_View::go_press()
{
   if (go_status) {
       ui->pushButton->setStyleSheet("color: red;");
       ui->pushButton->setText("No &Go!");
   } else {
       ui->pushButton->setStyleSheet("color: darkgreen;");
       ui->pushButton->setText("&Go!");
   }
   go_status = !go_status;
}
