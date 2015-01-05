/********************************************************************************
** Form generated from reading UI file 'telemetry.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELEMETRY_H
#define UI_TELEMETRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telemetry
{
public:

    void setupUi(QWidget *telemetry)
    {
        if (telemetry->objectName().isEmpty())
            telemetry->setObjectName(QStringLiteral("telemetry"));
        telemetry->resize(400, 300);

        retranslateUi(telemetry);

        QMetaObject::connectSlotsByName(telemetry);
    } // setupUi

    void retranslateUi(QWidget *telemetry)
    {
        telemetry->setWindowTitle(QApplication::translate("telemetry", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class telemetry: public Ui_telemetry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELEMETRY_H
