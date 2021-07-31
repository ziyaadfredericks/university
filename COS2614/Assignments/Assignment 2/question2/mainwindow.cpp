#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	ui->binaryLCD->display("");
	ui->hexLCD->display("");
}

MainWindow::~MainWindow()
{
	delete ui;
}

QString convertToBin (int num) {
	QString binString;

	while (num != 0) {
		binString = (num % 2 == 0 ? "0" : "1")+ binString; num /= 2;
	}

	return binString;
}

QString convertToHex (int num) {
	QString hexString;

	std::stringstream ss;
	ss<< std::hex << num; // int decimal_value
	std::string res ( ss.str() );

	std::cout << res;

	return hexString;
}

void MainWindow::on_convertButton_clicked()
{
	QString input = ui->intEditText->text();

	ui->binaryLCD->display(convertToBin(input.toInt()));
	ui->hexLCD->display(convertToHex(input.toInt()));
}

void MainWindow::on_clearAllButton_clicked()
{
	ui->binaryLCD->display("");
	ui->hexLCD->display("");
}

void MainWindow::on_binaryLCD_overflow()
{

}

void MainWindow::on_hexLCD_overflow()
{

}
