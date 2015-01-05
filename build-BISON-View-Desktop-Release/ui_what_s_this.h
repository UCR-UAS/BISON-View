/********************************************************************************
** Form generated from reading UI file 'what_s_this.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHAT_S_THIS_H
#define UI_WHAT_S_THIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_what_s_this
{
public:
    QPushButton *pushButton;
    QLabel *label_nyan;
    QLabel *label;

    void setupUi(QDialog *what_s_this)
    {
        if (what_s_this->objectName().isEmpty())
            what_s_this->setObjectName(QStringLiteral("what_s_this"));
        what_s_this->resize(400, 300);
        pushButton = new QPushButton(what_s_this);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 260, 98, 31));
        label_nyan = new QLabel(what_s_this);
        label_nyan->setObjectName(QStringLiteral("label_nyan"));
        label_nyan->setGeometry(QRect(20, 20, 251, 241));
        label_nyan->setPixmap(QPixmap(QString::fromUtf8("../nyan.png")));
        label = new QLabel(what_s_this);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 20, 91, 221));

        retranslateUi(what_s_this);

        QMetaObject::connectSlotsByName(what_s_this);
    } // setupUi

    void retranslateUi(QDialog *what_s_this)
    {
        what_s_this->setWindowTitle(QApplication::translate("what_s_this", "What's this?", 0));
        pushButton->setText(QApplication::translate("what_s_this", "Ok", 0));
        label_nyan->setText(QString());
        label->setText(QApplication::translate("what_s_this", "BISON View", 0));
    } // retranslateUi

};

namespace Ui {
    class what_s_this: public Ui_what_s_this {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHAT_S_THIS_H
