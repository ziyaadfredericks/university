#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <QRandomGenerator>
#include "Transaction.h"
#include "FoodProduct.h"
#include "Product.h"
#include "ProductList.h"

void addProduct(int i, ProductList *productList) {
	Product *product = new Product(QString::number(i + 1), i + 1, (i + 1) * 3, (i + 1) * 17.67);
	productList->add(product);
}

void addFoodProduct(int i, ProductList *productList) {
	FoodProduct *foodProduct = new FoodProduct(QString::number(i + 1), i + 1, (i + 1) * 3, (i + 1) * 17.67, QDate::currentDate().addDays(100));
	productList->add(foodProduct);
}

int main(int argc, char *argv[]) {
	QCoreApplication a(argc, argv);

	ProductList productList;

	quint32 v = QRandomGenerator::global()->bounded(1000, 2000);


	for (int i = 0; i < 10; ++i) {
		QRandomGenerator qRandomGenerator;
		int numberOfItems = QRandomGenerator::global()->bounded(1, 1000);
		double price = QRandomGenerator::global()->bounded(500.00);
		QDate sellByDate = QDate::currentDate().addDays(qRandomGenerator.bounded(7, 365));

		if (i % 2 == 0) {
			productList.add(new Product(QString::number(i + 1), i + 1, numberOfItems, price));
		} else {
			productList.add(new FoodProduct(QString::number(i + 1), i + 1, numberOfItems, price, sellByDate));
		}
	}

	productList.printAll();

	return QCoreApplication::exec();
}
