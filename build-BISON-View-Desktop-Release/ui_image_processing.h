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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_image_processing
{
public:

    void setupUi(QWidget *image_processing)
    {
        if (image_processing->objectName().isEmpty())
            image_processing->setObjectName(QStringLiteral("image_processing"));
        image_processing->resize(400, 300);

        retranslateUi(image_processing);

        QMetaObject::connectSlotsByName(image_processing);
    } // setupUi

    void retranslateUi(QWidget *image_processing)
    {
        image_processing->setWindowTitle(QApplication::translate("image_processing", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class image_processing: public Ui_image_processing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_PROCESSING_H
