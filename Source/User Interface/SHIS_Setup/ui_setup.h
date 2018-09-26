/********************************************************************************
** Form generated from reading UI file 'setup.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setup
{
public:
    QWidget *centralWidget;
    QPushButton *accept;
    QComboBox *Room;
    QCheckBox *guestbox;

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
        Room = new QComboBox(centralWidget);
        Room->setObjectName(QString::fromUtf8("Room"));
        Room->setGeometry(QRect(50, 30, 491, 71));
        QFont font1;
        font1.setPointSize(20);
        Room->setFont(font1);
        guestbox = new QCheckBox(centralWidget);
        guestbox->setObjectName(QString::fromUtf8("guestbox"));
        guestbox->setGeometry(QRect(50, 140, 179, 33));
        QFont font2;
        font2.setPointSize(18);
        guestbox->setFont(font2);
        guestbox->setIconSize(QSize(40, 40));
        guestbox->setTristate(false);
        Setup->setCentralWidget(centralWidget);

        retranslateUi(Setup);

        QMetaObject::connectSlotsByName(Setup);
    } // setupUi

    void retranslateUi(QMainWindow *Setup)
    {
        Setup->setWindowTitle(QApplication::translate("Setup", "Setup", 0, QApplication::UnicodeUTF8));
        accept->setText(QApplication::translate("Setup", "Accept", 0, QApplication::UnicodeUTF8));
        Room->clear();
        Room->insertItems(0, QStringList()
         << QApplication::translate("Setup", "Living Room", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Setup", "Kitchen", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Setup", "Hallway", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Setup", "Garage", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Setup", "Master Bedroom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Setup", "Office", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Setup", "Bedroom 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Setup", "Bedroom 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Setup", "Dining Room", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Setup", "Porch", 0, QApplication::UnicodeUTF8)
        );
        guestbox->setText(QApplication::translate("Setup", "     Guest Only", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Setup: public Ui_Setup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUP_H
