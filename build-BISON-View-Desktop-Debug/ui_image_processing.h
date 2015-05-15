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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_image_processing
{
public:
    QPushButton *prev;
    QPushButton *next;
    QPushButton *first;
    QPushButton *confirm;
    QPushButton *trash;
    QPushButton *last;
    QFrame *frame;
    QGraphicsView *graphicsView;
    QTextEdit *textEdit;

    void setupUi(QWidget *image_processing)
    {
        if (image_processing->objectName().isEmpty())
            image_processing->setObjectName(QStringLiteral("image_processing"));
        image_processing->resize(576, 347);
        prev = new QPushButton(image_processing);
        prev->setObjectName(QStringLiteral("prev"));
        prev->setGeometry(QRect(370, 140, 51, 31));
        next = new QPushButton(image_processing);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(430, 140, 51, 31));
        first = new QPushButton(image_processing);
        first->setObjectName(QStringLiteral("first"));
        first->setGeometry(QRect(490, 140, 51, 31));
        confirm = new QPushButton(image_processing);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(330, 180, 98, 31));
        trash = new QPushButton(image_processing);
        trash->setObjectName(QStringLiteral("trash"));
        trash->setGeometry(QRect(430, 180, 98, 31));
        last = new QPushButton(image_processing);
        last->setObjectName(QStringLiteral("last"));
        last->setGeometry(QRect(310, 140, 51, 31));
        frame = new QFrame(image_processing);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 20, 251, 251));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(5);
        graphicsView = new QGraphicsView(frame);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(5, 5, 240, 240));
        textEdit = new QTextEdit(image_processing);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(310, 20, 231, 111));

        retranslateUi(image_processing);

        QMetaObject::connectSlotsByName(image_processing);
    } // setupUi

    void retranslateUi(QWidget *image_processing)
    {
        image_processing->setWindowTitle(QApplication::translate("image_processing", "Form", 0));
        prev->setText(QApplication::translate("image_processing", "<", 0));
        next->setText(QApplication::translate("image_processing", ">", 0));
        first->setText(QApplication::translate("image_processing", ">>", 0));
        confirm->setText(QApplication::translate("image_processing", "Confirm", 0));
        trash->setText(QApplication::translate("image_processing", "Trash", 0));
        last->setText(QApplication::translate("image_processing", "<<", 0));
    } // retranslateUi

};

namespace Ui {
    class image_processing: public Ui_image_processing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_PROCESSING_H
