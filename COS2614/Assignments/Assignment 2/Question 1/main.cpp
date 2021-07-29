#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <QRandomGenerator>
#include "Transaction.h"
#include "FoodProduct.h"
#include "Product.h"
#include "ProductList.h"

int main(int argc, char *argv[]) {
	QCoreApplication a(argc, argv);

	ProductList productList;

	for (int i = 0; i < 10; ++i) {
		QRandomGenerator qRandomGenerator;
		int numberOfItems = QRandomGenerator::global()->bounded(100, 1000);
		double price = QRandomGenerator::global()->bounded(50000) / 100.00;
		QDate sellByDate = QDate::currentDate().addDays(qRandomGenerator.bounded(7, 365));

		if (i % 2 == 0) {
			productList.add(new Product("non-perishable", i + 1, numberOfItems, price));
		} else {
			productList.add(new FoodProduct("perishable", i + 1, numberOfItems, price, sellByDate));
		}
	}

	productList.sell(1001, 2);

	productList.printAll();

	productList.deleteAll();

	return QCoreApplication::exec();
}