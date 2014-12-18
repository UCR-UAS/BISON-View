/* Engineer: Brandon Lu (blu006@ucr.edu)
 * Organization: UCR SUAS
 * Project: BISON-View
 * Filename: welcome_message.cpp
 * Description:
 * This is the welcome messages file.
 */

#include "welcome_message.h"
#include "ui_welcome_message.h"

welcome_message::welcome_message(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::welcome_message)
{
    ui->setupUi(this);

    // initialize text (This was probably the first test)
    ui->textBrowser->insertPlainText("Welcome to the AUVSI-UCR (aka. UCR UAV)"
    " BISON View interaface.\n\n");
}

welcome_message::~welcome_message()
{
    delete ui;
}

void welcome_message::new_message(const QString &message)
{
    ui->textBrowser->insertPlainText(message);
}
