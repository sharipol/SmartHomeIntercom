//This is the main program for the the Smart Home Intercom System
//Requirements met:
//Video Streaming, Face Detection, Audio Streaming

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QProcess *audioreceive = new QProcess(this);
    QProcess *videoreceive = new QProcess(this);

    QString receiveVideo = QString::fromLatin1("gst-launch-1.0 udpsrc port=5555 ! h264parse ! omxh264dec ! autovideosink");
    QString receiveAudio = QString::fromLatin1("gst-launch-1.0 udpsrc port=5000 caps=\"application/x-rtp\" ! rtpopusdepay ! opusdec ! autoaudiosink");

    videoreceive->start(receiveVideo);
    audioreceive->start(receiveAudio);
    
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ExitButton_clicked()
{
    //Starts up options menu
    Options = new options();
    Options->show();
}

void MainWindow::on_Video_page_pressed()
{
    //This kills and restarts openCV along with starting the video stream and
    //audio stream
    QProcess *videoreceive = new QProcess(this);
    QProcess *videosend = new QProcess(this);
    QProcess *audioreceive = new QProcess(this);
    QProcess *audiosend = new QProcess(this);
    QProcess *killallprocess = new QProcess(this);
    
    QTimer *timer = new QTimer(this);
    
    QString sendVideo = QString::fromLatin1("gst-launch-1.0 rpicamsrc bitrate=2097152 preview-opacity=255 preview-x=0 preview-y=0 preview-w=480 preview-h=270 fullscreen=false rotation=180 sensor-mode=5 annotation-mode=0x020c ! omxh264enc target-bitrate=2097152 control-rate=variable ! video/x-h264,width=480,height=270,framerate=25/1,profile=high ! h264parse ! udpsink host=192.168.0.2 port=5555");
    QString receiveVideo = QString::fromLatin1("gst-launch-1.0 udpsrc port=5555 ! h264parse ! omxh264dec ! autovideosink");
    QString killCV =  QString::fromLatin1("kill $(ps axuww | grep \"python Desktop/OpenCV.py\" | awk \'{print $2}\' | sed -n 1p)");
    QString openCV = QString::fromLatin1("python Desktop/OpenCV.py");
    QString sendAudio = QString::fromLatin1("gst-launch-1.0 alsasrc device=hw:1 ! audioconvert ! opusenc ! rtpopuspay ! udpsink host=192.168.0.2 port=5000");
    QString receiveAudio = QString::fromLatin1("gst-launch-1.0 udpsrc port=5000 caps=\"application/x-rtp\" ! rtpopusdepay ! opusdec ! autoaudiosink");
    QString killall = QString::fromLatin1("kill $(ps -a | grep gst | awk '{print $1}')");
    
    //process->start(killCV);
    //Need some dedicated conditional to know whether to send or receive.
    videoreceive->start(receiveVideo);
    videosend->start(sendVideo);
    audioreceive->start(receiveAudio);
    audiosend->start(sendAudio);
    //process->start(openCV);
    
    //Need some condition to kill all. 
}

void MainWindow::on_Audio_page_pressed()
{
    //This simply does audio and doesn't mess with OpenCV or Video Streaming
    QProcess *audioreceive = new QProcess(this);
    QProcess *audiosend = new QProcess(this);
    QString sendAudio = QString::fromLatin1("gst-launch-1.0 alsasrc device=hw:1 ! audioconvert ! opusenc ! rtpopuspay ! udpsink host=192.168.0.1 port=5000");
    QString receiveAudio = QString::fromLatin1("gst-launch-1.0 udpsrc port=5000 caps=\"application/x-rtp\" ! rtpopusdepay ! opusdec ! autoaudiosink");
    
    audioreceive->start(receiveAudio);
    audiosend->start(sendAudio);
}
