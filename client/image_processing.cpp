#include "image_processing.h"
#include "ui_image_processing.h"

image_processing::image_processing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::image_processing)
{
    ui->setupUi(this);
}

image_processing::~image_processing()
{
    delete ui;
}

void image_processing::on_pushButton_clicked()
{

}

void image_processing::on_Next_clicked()
{

}

void image_processing::on_Tag_clicked()
{
    QString newGeoTag = ui->textBrowser->toPlainText();
    qDebug(newGeoTag.toLatin1());
}
