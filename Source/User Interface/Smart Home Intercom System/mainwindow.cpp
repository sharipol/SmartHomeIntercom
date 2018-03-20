#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ExitButton_clicked()
{
    Options = new options();
    Options->show();
}

void MainWindow::on_Video_page_pressed()
{
    QProcess *process = new QProcess(this);
    QString send = QString::fromLatin1("raspivid -vf -t 0 -h 720 -w 1080 -fps 25 -hf -b 2000000 -o - | gst-launch-1.0 -v fdsrc ! h264parse ! rtph264pay config-interval=1 pt=96 ! gdppay ! udpsink host=RECEIVING-PI-IP-ADDRESS port=5000");
    QString receive = QString::fromLatin1("gst-launch-1.0 -v udpsrc port=5000 ! gdpdepay ! rtph264depay ! avdec_h264 ! videoconvert ! autovideosink sync=false");
    QString killCV =  QString::fromLatin1("kill $(ps axuww | grep \"python Desktop/OpenCV.py\" | awk \'{print $2}\' | sed -n 1p)")
    QString openCV = QString::fromLatin1("python Desktop/OpenCV.py")
                                         
    process->start(killCV);
    //Need some dedicated conditional to know whether to send or receive.
    process->start(send);
    process->waitForFinished(process);
    //process->start(receive);
    process->start(openCV);
}

void MainWindow::on_Audio_page_pressed()
{
    //Copy on_video_page_pressed into here with code for just audio
    QProcess *process = new QProcess(this);
    QString send = QString::fromLatin1("rec -c 1 -t wav - | ssh <IP> play -");
    QString receive = QString::fromLatin1("rec -c 1 -t wav - | ssh <IP> play -");
    
    //Need some dedicated conditional to know whether to send or receive.
    process->start(send);
    //process->start(receive);
    
}
