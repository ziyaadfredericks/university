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
	QString hexString = "";

	char hexaDeciNum[100];

	int i = 0;
	while (num != 0) {
	  int remainder = num % 16;

	  if (remainder < 10) {
		hexaDeciNum[i] = remainder + 48;
	  } else {
		hexaDeciNum[i] = remainder + 55;
	  }

	  i++;

	  num = num / 16;
	}

	// printing hexadecimal number array in reverse order
	for (int j = i - 1; j >= 0; j--) {
		hexString.append(hexaDeciNum[j]);
	}

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
