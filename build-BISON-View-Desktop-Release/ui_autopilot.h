/********************************************************************************
** Form generated from reading UI file 'autopilot.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOPILOT_H
#define UI_AUTOPILOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_autopilot
{
public:

    void setupUi(QWidget *autopilot)
    {
        if (autopilot->objectName().isEmpty())
            autopilot->setObjectName(QStringLiteral("autopilot"));
        autopilot->resize(400, 300);

        retranslateUi(autopilot);

        QMetaObject::connectSlotsByName(autopilot);
    } // setupUi

    void retranslateUi(QWidget *autopilot)
    {
        autopilot->setWindowTitle(QApplication::translate("autopilot", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class autopilot: public Ui_autopilot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOPILOT_H
