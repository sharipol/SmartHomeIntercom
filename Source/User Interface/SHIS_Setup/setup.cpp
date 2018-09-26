#include "setup.h"
#include "ui_setup.h"
#include <QProcess>
#include <string>
#include <QFile>
#include <QTextStream>

Setup::Setup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Setup)
{
    ui->setupUi(this);
}

Setup::~Setup()
{
    delete ui;
}

void Setup::on_accept_clicked()
{
    QProcess process;
    QString program = QString::fromLatin1("touch /home/pi/Desktop/Data.txt");

    process.start(program);
    process.waitForFinished();

    QString filename = "/home/pi/Desktop/Data.txt";
    QFile file(filename);
    if (file.open(QIODevice::ReadWrite)){
        QTextStream stream( &file );
        stream << ui->Room->currentText() << endl;
        if(ui->guestbox->isChecked())
        {
            stream << "GUESTMODE" << endl;
        }
    }
}
