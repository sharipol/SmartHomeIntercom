//This meets the "embedded" requirement per the update with Kevin:
//"A chromeless full-screened window is fine for the embedded requirement."
//showFullScreen forces that with Qt.

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showFullScreen();

    return a.exec();
}
