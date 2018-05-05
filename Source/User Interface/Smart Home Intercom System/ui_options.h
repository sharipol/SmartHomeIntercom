/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_options
{
public:
    QGroupBox *brightness;
    QSlider *brightness_slider;
    QTimeEdit *timeEdit;
    QComboBox *default_page;
    QGroupBox *volume;
    QSlider *volume_slider;
    QPushButton *apply_button;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QComboBox *defaultMode;

    void setupUi(QWidget *options)
    {
        if (options->objectName().isEmpty())
            options->setObjectName(QString::fromUtf8("options"));
        options->resize(730, 396);
        brightness = new QGroupBox(options);
        brightness->setObjectName(QString::fromUtf8("brightness"));
        brightness->setGeometry(QRect(290, 130, 201, 81));
        QFont font;
        font.setPointSize(20);
        brightness->setFont(font);
        brightness_slider = new QSlider(brightness);
        brightness_slider->setObjectName(QString::fromUtf8("brightness_slider"));
        brightness_slider->setGeometry(QRect(20, 40, 160, 22));
        brightness_slider->setMinimum(15);
        brightness_slider->setMaximum(200);
        brightness_slider->setValue(200);
        brightness_slider->setSliderPosition(200);
        brightness_slider->setTracking(true);
        brightness_slider->setOrientation(Qt::Horizontal);
        brightness_slider->setTickPosition(QSlider::NoTicks);
        timeEdit = new QTimeEdit(options);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(280, 30, 201, 61));
        timeEdit->setFont(font);
        default_page = new QComboBox(options);
        default_page->setObjectName(QString::fromUtf8("default_page"));
        default_page->setGeometry(QRect(20, 30, 211, 61));
        default_page->setFont(font);
        volume = new QGroupBox(options);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(500, 130, 201, 81));
        volume->setFont(font);
        volume_slider = new QSlider(volume);
        volume_slider->setObjectName(QString::fromUtf8("volume_slider"));
        volume_slider->setGeometry(QRect(20, 40, 160, 22));
        volume_slider->setMinimum(0);
        volume_slider->setMaximum(100);
        volume_slider->setSingleStep(1);
        volume_slider->setPageStep(10);
        volume_slider->setValue(100);
        volume_slider->setOrientation(Qt::Horizontal);
        apply_button = new QPushButton(options);
        apply_button->setObjectName(QString::fromUtf8("apply_button"));
        apply_button->setGeometry(QRect(520, 310, 171, 51));
        apply_button->setFont(font);
        dateEdit = new QDateEdit(options);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(510, 30, 171, 61));
        dateEdit->setFont(font);
        pushButton = new QPushButton(options);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 310, 171, 51));
        pushButton->setFont(font);
        defaultMode = new QComboBox(options);
        defaultMode->setObjectName(QString::fromUtf8("defaultMode"));
        defaultMode->setGeometry(QRect(20, 140, 211, 61));
        defaultMode->setFont(font);
        defaultMode->setEditable(false);

        retranslateUi(options);
        QObject::connect(defaultMode, SIGNAL(currentIndexChanged(int)), options, SLOT(show()));

        defaultMode->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(options);
    } // setupUi

    void retranslateUi(QWidget *options)
    {
        options->setWindowTitle(QApplication::translate("options", "Form", 0, QApplication::UnicodeUTF8));
        brightness->setTitle(QApplication::translate("options", "Brightness", 0, QApplication::UnicodeUTF8));
        default_page->clear();
        default_page->insertItems(0, QStringList()
         << QApplication::translate("options", "All", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("options", "Living Room", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("options", "Kitchen", 0, QApplication::UnicodeUTF8)
        );
        volume->setTitle(QApplication::translate("options", "Volume", 0, QApplication::UnicodeUTF8));
        apply_button->setText(QApplication::translate("options", "Apply", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("options", "Cancel", 0, QApplication::UnicodeUTF8));
        defaultMode->clear();
        defaultMode->insertItems(0, QStringList()
         << QApplication::translate("options", "Standard", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("options", "Guest", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("options", "Admin", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class options: public Ui_options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
