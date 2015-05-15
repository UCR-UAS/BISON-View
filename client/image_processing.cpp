#include "image_processing.h"
#include "ui_image_processing.h"

image_processing::image_processing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::image_processing)
{
    ui->setupUi(this);
    emit button_pushed(9);
}

image_processing::~image_processing()
{
    delete ui;
}

void image_processing::new_image(QString path)
{
    qDebug() << path;
    image = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(image);
    QPixmap pic(path);
    ui->graphicsView->show();
}

void image_processing::on_last_clicked()
{
    emit button_pushed(0);
}

void image_processing::on_prev_clicked()
{
    emit button_pushed(1);
}

void image_processing::on_next_clicked()
{
    emit button_pushed(2);
}

void image_processing::on_first_clicked()
{
    emit button_pushed(3);
}

void image_processing::on_confirm_clicked()
{
    emit button_pushed(4);
}

void image_processing::on_trash_clicked()
{
    emit button_pushed(5);
}
