#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_convertButton_clicked()
{
	QString input = ui->intEditText->text();
	ui->binaryLCD->display(input);
	ui->hexLCD->display(input);
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
