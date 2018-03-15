#include "options.h"
#include "ui_options.h"
#include <QProcess>
#include <string>


int screenBrightness = 15;


options::options(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::options)
{
    ui->setupUi(this);
}

options::~options()
{
    delete ui;
}

void options::on_apply_button_clicked()
{
    
}

void options::on_pushButton_clicked()
{
    close();
}

void options::on_brightness_slider_valueChanged(int value)
{
	QProcess process;
	QString program = QString::fromLatin1("sudo sh -c \"echo %1 > /sys/class/backlight/rpi_backlight/brightness\"").arg(value);

	process.start(program);
	
	
	// Wait for it to start
	if(!process.waitForStarted()) {
		return;
	}
	
	
	process.waitForFinished();
}

void options::on_volume_slider_valueChanged(int value)
{
    QProcess process;
	QString program = QString::fromLatin1("amixer sset PCM -M %1\%").arg(value);
	process.start(program);
	
	
	// Wait for it to start
	if(!process.waitForStarted()) {
		return;
	}
	
	
	process.waitForFinished();
}

void options::on_defaultMode_activated(int value) {
		if (value == 2) {
		MyInputPanel *inputPanel = new MyInputPanel;
		inputPanel->show();
		}
	
}



