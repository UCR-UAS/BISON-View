/********************************************************************************
** Form generated from reading UI file 'welcome_message.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_MESSAGE_H
#define UI_WELCOME_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome_message
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *welcome_message)
    {
        if (welcome_message->objectName().isEmpty())
            welcome_message->setObjectName(QStringLiteral("welcome_message"));
        welcome_message->resize(400, 300);
        gridLayout = new QGridLayout(welcome_message);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(welcome_message);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        retranslateUi(welcome_message);

        QMetaObject::connectSlotsByName(welcome_message);
    } // setupUi

    void retranslateUi(QWidget *welcome_message)
    {
        welcome_message->setWindowTitle(QApplication::translate("welcome_message", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class welcome_message: public Ui_welcome_message {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_MESSAGE_H
