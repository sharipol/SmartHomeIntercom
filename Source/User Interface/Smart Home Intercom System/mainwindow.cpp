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
    QString program = "raspivid";
    QString arguments = "-d";
    process->start(program, QStringList() << arguments);
}
