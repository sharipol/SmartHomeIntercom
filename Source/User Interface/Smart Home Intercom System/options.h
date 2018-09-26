#ifndef OPTIONS_H
#define OPTIONS_H

#include <QWidget>
#include<QProcess>
#include "myinputpanel.h"

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

    void on_volume_slider_valueChanged(int value);
	
	void on_apply_button_clicked();
	
	void on_defaultMode_activated(int value);

private:
    Ui::options *ui;
};

#endif // OPTIONS_H
