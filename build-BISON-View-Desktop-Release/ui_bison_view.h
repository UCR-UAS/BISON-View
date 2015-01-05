/********************************************************************************
** Form generated from reading UI file 'bison_view.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BISON_VIEW_H
#define UI_BISON_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BISON_View
{
public:
    QAction *actionSave_Telemetry;
    QAction *actionSave_Telemetry_2;
    QAction *actionLoad_Images;
    QAction *actionSave_Images;
    QAction *actionExport_Telemetry;
    QAction *actionSet_Server;
    QAction *actionBISON_View_Help;
    QAction *actionWhat_s_this;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QCommandLinkButton *commandLinkButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QFrame *line;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuConnection;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BISON_View)
    {
        if (BISON_View->objectName().isEmpty())
            BISON_View->setObjectName(QStringLiteral("BISON_View"));
        BISON_View->resize(800, 400);
        BISON_View->setStyleSheet(QStringLiteral("QTabWidget::tab:disabled { width: 0; height: 0; margin: 0; padding: 0; border: none; }"));
        actionSave_Telemetry = new QAction(BISON_View);
        actionSave_Telemetry->setObjectName(QStringLiteral("actionSave_Telemetry"));
        actionSave_Telemetry_2 = new QAction(BISON_View);
        actionSave_Telemetry_2->setObjectName(QStringLiteral("actionSave_Telemetry_2"));
        actionLoad_Images = new QAction(BISON_View);
        actionLoad_Images->setObjectName(QStringLiteral("actionLoad_Images"));
        actionSave_Images = new QAction(BISON_View);
        actionSave_Images->setObjectName(QStringLiteral("actionSave_Images"));
        actionExport_Telemetry = new QAction(BISON_View);
        actionExport_Telemetry->setObjectName(QStringLiteral("actionExport_Telemetry"));
        actionSet_Server = new QAction(BISON_View);
        actionSet_Server->setObjectName(QStringLiteral("actionSet_Server"));
        actionBISON_View_Help = new QAction(BISON_View);
        actionBISON_View_Help->setObjectName(QStringLiteral("actionBISON_View_Help"));
        actionWhat_s_this = new QAction(BISON_View);
        actionWhat_s_this->setObjectName(QStringLiteral("actionWhat_s_this"));
        centralWidget = new QWidget(BISON_View);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 0, 3, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);

        commandLinkButton = new QCommandLinkButton(widget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setStyleSheet(QStringLiteral("color: red;"));

        gridLayout_2->addWidget(commandLinkButton, 0, 4, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 2, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setDocumentMode(true);

        gridLayout->addWidget(tabWidget, 3, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 1);

        BISON_View->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BISON_View);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 27));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuConnection = new QMenu(menuBar);
        menuConnection->setObjectName(QStringLiteral("menuConnection"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        BISON_View->setMenuBar(menuBar);
        statusBar = new QStatusBar(BISON_View);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BISON_View->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuConnection->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave_Telemetry);
        menuFile->addAction(actionSave_Telemetry_2);
        menuFile->addSeparator();
        menuFile->addAction(actionLoad_Images);
        menuFile->addAction(actionSave_Images);
        menuFile->addAction(actionExport_Telemetry);
        menuConnection->addAction(actionSet_Server);
        menuHelp->addAction(actionBISON_View_Help);
        menuHelp->addAction(actionWhat_s_this);

        retranslateUi(BISON_View);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(BISON_View);
    } // setupUi

    void retranslateUi(QMainWindow *BISON_View)
    {
        BISON_View->setWindowTitle(QApplication::translate("BISON_View", "BISON View", 0));
        actionSave_Telemetry->setText(QApplication::translate("BISON_View", "Lo&ad Telemetry", 0));
        actionSave_Telemetry_2->setText(QApplication::translate("BISON_View", "Sa&ve Telemetry", 0));
        actionLoad_Images->setText(QApplication::translate("BISON_View", "L&oad Images", 0));
        actionSave_Images->setText(QApplication::translate("BISON_View", "&Save Images", 0));
        actionExport_Telemetry->setText(QApplication::translate("BISON_View", "E&xport Telemetry", 0));
        actionSet_Server->setText(QApplication::translate("BISON_View", "S&et Server", 0));
        actionBISON_View_Help->setText(QApplication::translate("BISON_View", "BISON-View Help", 0));
        actionWhat_s_this->setText(QApplication::translate("BISON_View", "What's this?", 0));
        commandLinkButton->setText(QApplication::translate("BISON_View", "Login", 0));
        pushButton->setText(QApplication::translate("BISON_View", "No Go", 0));
        menuFile->setTitle(QApplication::translate("BISON_View", "&File", 0));
        menuConnection->setTitle(QApplication::translate("BISON_View", "&Connection", 0));
        menuHelp->setTitle(QApplication::translate("BISON_View", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class BISON_View: public Ui_BISON_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BISON_VIEW_H
