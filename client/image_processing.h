#ifndef IMAGE_PROCESSING_H
#define IMAGE_PROCESSING_H

#include <QWidget>
#include <QGraphicsScene>
#include <QDebug>

namespace Ui {
class image_processing;
}

class image_processing : public QWidget
{
    Q_OBJECT

public:
    explicit image_processing(QWidget *parent = 0);
    ~image_processing();

private slots:
    void new_image(QString);
    void on_last_clicked();
    void on_prev_clicked();
    void on_next_clicked();
    void on_first_clicked();
    void on_confirm_clicked();
    void on_trash_clicked();

private:
    Ui::image_processing *ui;
    QGraphicsScene *image;

signals:
    void button_pushed(int);
};

#endif // IMAGE_PROCESSING_H
