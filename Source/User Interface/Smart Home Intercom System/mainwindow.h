#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "options.h"
#include <QProcess>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ExitButton_clicked();

    void on_Video_page_pressed();

    void on_Audio_page_pressed();

public:
    Ui::MainWindow *ui;
    options *Options;
};

#endif // MAINWINDOW_H
