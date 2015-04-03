/********************************************************************************
** Form generated from reading UI file 'image_processing.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_PROCESSING_H
#define UI_IMAGE_PROCESSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_image_processing
{
public:
    QPushButton *Tag;
    QLabel *label;
    QPushButton *Next;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QWidget *image_processing)
    {
        if (image_processing->objectName().isEmpty())
            image_processing->setObjectName(QStringLiteral("image_processing"));
        image_processing->resize(400, 300);
        Tag = new QPushButton(image_processing);
        Tag->setObjectName(QStringLiteral("Tag"));
        Tag->setGeometry(QRect(240, 160, 98, 31));
        label = new QLabel(image_processing);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 181, 221));
        Next = new QPushButton(image_processing);
        Next->setObjectName(QStringLiteral("Next"));
        Next->setGeometry(QRect(240, 200, 98, 31));
        textBrowser = new QTextBrowser(image_processing);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(220, 40, 161, 101));
        pushButton = new QPushButton(image_processing);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 240, 98, 31));

        retranslateUi(image_processing);

        QMetaObject::connectSlotsByName(image_processing);
    } // setupUi

    void retranslateUi(QWidget *image_processing)
    {
        image_processing->setWindowTitle(QApplication::translate("image_processing", "Form", 0));
        Tag->setText(QApplication::translate("image_processing", "Update", 0));
        label->setText(QApplication::translate("image_processing", "TextLabel", 0));
        Next->setText(QApplication::translate("image_processing", "Save", 0));
        pushButton->setText(QApplication::translate("image_processing", "Trash", 0));
    } // retranslateUi

};

namespace Ui {
    class image_processing: public Ui_image_processing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_PROCESSING_H
