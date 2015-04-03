#ifndef IMAGE_PROCESSING_H
#define IMAGE_PROCESSING_H

#include <QWidget>

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
    void on_pushButton_clicked();

    void on_Next_clicked();

    void on_Tag_clicked();

private:
    Ui::image_processing *ui;
};

#endif // IMAGE_PROCESSING_H
