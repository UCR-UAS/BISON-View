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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mission
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *EggX;
    QLineEdit *EggY;
    QLineEdit *Uname;
    QLineEdit *Pass;

    void setupUi(QWidget *mission)
    {
        if (mission->objectName().isEmpty())
            mission->setObjectName(QStringLiteral("mission"));
        mission->resize(400, 300);
        pushButton = new QPushButton(mission);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 140, 98, 31));
        pushButton_2 = new QPushButton(mission);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 20, 98, 31));
        EggX = new QLineEdit(mission);
        EggX->setObjectName(QStringLiteral("EggX"));
        EggX->setGeometry(QRect(20, 60, 341, 33));
        EggY = new QLineEdit(mission);
        EggY->setObjectName(QStringLiteral("EggY"));
        EggY->setGeometry(QRect(20, 100, 341, 33));
        Uname = new QLineEdit(mission);
        Uname->setObjectName(QStringLiteral("Uname"));
        Uname->setGeometry(QRect(20, 180, 341, 33));
        Pass = new QLineEdit(mission);
        Pass->setObjectName(QStringLiteral("Pass"));
        Pass->setGeometry(QRect(20, 220, 341, 33));

        retranslateUi(mission);

        QMetaObject::connectSlotsByName(mission);
    } // setupUi

    void retranslateUi(QWidget *mission)
    {
        mission->setWindowTitle(QApplication::translate("mission", "Form", 0));
        pushButton->setText(QApplication::translate("mission", "SRIC Stuff", 0));
        pushButton_2->setText(QApplication::translate("mission", "Send Coords", 0));
    } // retranslateUi

};

namespace Ui {
    class mission: public Ui_mission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSION_H
