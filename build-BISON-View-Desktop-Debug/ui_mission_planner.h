/********************************************************************************
** Form generated from reading UI file 'mission_planner.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSION_PLANNER_H
#define UI_MISSION_PLANNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mission_planner
{
public:

    void setupUi(QWidget *mission_planner)
    {
        if (mission_planner->objectName().isEmpty())
            mission_planner->setObjectName(QStringLiteral("mission_planner"));
        mission_planner->resize(400, 300);

        retranslateUi(mission_planner);

        QMetaObject::connectSlotsByName(mission_planner);
    } // setupUi

    void retranslateUi(QWidget *mission_planner)
    {
        mission_planner->setWindowTitle(QApplication::translate("mission_planner", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class mission_planner: public Ui_mission_planner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSION_PLANNER_H
