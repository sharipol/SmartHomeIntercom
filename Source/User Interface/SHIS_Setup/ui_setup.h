/********************************************************************************
** Form generated from reading UI file 'setup.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUP_H
#define UI_SETUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setup
{
public:
    QWidget *centralWidget;
    QPushButton *accept;
    QComboBox *comboBox;
    QCheckBox *guestbox;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Setup)
    {
        if (Setup->objectName().isEmpty())
            Setup->setObjectName(QString::fromUtf8("Setup"));
        Setup->resize(688, 375);
        centralWidget = new QWidget(Setup);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        accept = new QPushButton(centralWidget);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setGeometry(QRect(470, 260, 181, 71));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        accept->setFont(font);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 30, 491, 71));
        guestbox = new QCheckBox(centralWidget);
        guestbox->setObjectName(QString::fromUtf8("guestbox"));
        guestbox->setGeometry(QRect(80, 150, 179, 33));
        QFont font1;
        font1.setPointSize(18);
        guestbox->setFont(font1);
        guestbox->setIconSize(QSize(40, 40));
        guestbox->setTristate(false);
        Setup->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Setup);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Setup->setStatusBar(statusBar);

        retranslateUi(Setup);

        QMetaObject::connectSlotsByName(Setup);
    } // setupUi

    void retranslateUi(QMainWindow *Setup)
    {
        Setup->setWindowTitle(QApplication::translate("Setup", "Setup", 0, QApplication::UnicodeUTF8));
        accept->setText(QApplication::translate("Setup", "Accept", 0, QApplication::UnicodeUTF8));
        guestbox->setText(QApplication::translate("Setup", "     Guest Only", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Setup: public Ui_Setup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUP_H
