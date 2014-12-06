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
