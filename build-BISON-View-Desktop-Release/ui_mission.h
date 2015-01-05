/********************************************************************************
** Form generated from reading UI file 'mission.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSION_H
#define UI_MISSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mission
{
public:

    void setupUi(QWidget *mission)
    {
        if (mission->objectName().isEmpty())
            mission->setObjectName(QStringLiteral("mission"));
        mission->resize(400, 300);

        retranslateUi(mission);

        QMetaObject::connectSlotsByName(mission);
    } // setupUi

    void retranslateUi(QWidget *mission)
    {
        mission->setWindowTitle(QApplication::translate("mission", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class mission: public Ui_mission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSION_H
