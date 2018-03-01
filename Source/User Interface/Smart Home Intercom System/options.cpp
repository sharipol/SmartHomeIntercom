#include "options.h"
#include "ui_options.h"
#include <QProcess>

options::options(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::options)
{
    ui->setupUi(this);
}

options::~options()
{
    delete ui;
}

void options::on_pushButton_clicked()
{
    close();
}

void options::on_brightness_slider_valueChanged(int value)
{
    QProcess *process = new QProcess(this);
    QString program = "sudo";
    QString arguments = "bash -c \"echo 200 > /sys/class/backlight/rpi_backlight/brightness";
    process->start(program, QStringList() << arguments);
}

void options::on_brightness_slider_sliderMoved(int position)
{
    QProcess *process = new QProcess(this);
    QString program = "sudo";
    QString arguments = "bash -c \"echo 60 > /sys/class/backlight/rpi_backlight/brightness";
    process->start(program, QStringList() << arguments);
}
