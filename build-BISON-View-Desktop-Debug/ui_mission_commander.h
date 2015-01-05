/********************************************************************************
** Form generated from reading UI file 'mission_commander.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSION_COMMANDER_H
#define UI_MISSION_COMMANDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mission_commander
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QWidget *mission_commander)
    {
        if (mission_commander->objectName().isEmpty())
            mission_commander->setObjectName(QStringLiteral("mission_commander"));
        mission_commander->resize(400, 300);
        textBrowser = new QTextBrowser(mission_commander);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 371, 251));

        retranslateUi(mission_commander);

        QMetaObject::connectSlotsByName(mission_commander);
    } // setupUi

    void retranslateUi(QWidget *mission_commander)
    {
        mission_commander->setWindowTitle(QApplication::translate("mission_commander", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class mission_commander: public Ui_mission_commander {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSION_COMMANDER_H
