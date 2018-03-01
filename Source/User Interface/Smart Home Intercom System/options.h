#ifndef OPTIONS_H
#define OPTIONS_H

#include <QWidget>
#include<QProcess>

namespace Ui {
class options;
}

class options : public QWidget
{
    Q_OBJECT

public:
    explicit options(QWidget *parent = 0);
    ~options();

private slots:
    void on_pushButton_clicked();

    void on_brightness_slider_valueChanged(int value);

    void on_brightness_slider_sliderMoved(int position);

private:
    Ui::options *ui;
};

#endif // OPTIONS_H
