/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *ExitButton;
    QPushButton *Video_page;
    QPushButton *Audio_page;
    QFrame *feed;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ExitButton = new QPushButton(centralWidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(430, 320, 271, 71));
        Video_page = new QPushButton(centralWidget);
        Video_page->setObjectName(QString::fromUtf8("Video_page"));
        Video_page->setGeometry(QRect(430, 50, 271, 71));
        Audio_page = new QPushButton(centralWidget);
        Audio_page->setObjectName(QString::fromUtf8("Audio_page"));
        Audio_page->setGeometry(QRect(430, 190, 271, 71));
        feed = new QFrame(centralWidget);
        feed->setObjectName(QString::fromUtf8("feed"));
        feed->setGeometry(QRect(60, 80, 261, 261));
        feed->setFrameShape(QFrame::StyledPanel);
        feed->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        ExitButton->setText(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
        Video_page->setText(QApplication::translate("MainWindow", "Video Page", 0, QApplication::UnicodeUTF8));
        Audio_page->setText(QApplication::translate("MainWindow", "Audio Page", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
