/* Engineer: Brandon Lu (blu006@ucr.edu)
 * Organization: UCR SUAS
 * Project: BISON-View
 * Filename: welcome_message.h
 * Description:
 * This is the header file for our welcome message (and other messages)
 * interface.
 */

#ifndef WELCOME_MESSAGE_H
#define WELCOME_MESSAGE_H

#include <QWidget>

namespace Ui {
class welcome_message;
}

class welcome_message : public QWidget
{
    Q_OBJECT
    
public:
    explicit welcome_message(QWidget *parent = 0);
    ~welcome_message();

private:
    Ui::welcome_message *ui;
};

#endif // WELCOME_MESSAGE_H
