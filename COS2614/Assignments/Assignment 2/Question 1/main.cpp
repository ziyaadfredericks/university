#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <QRandomGenerator>
#include "Transaction.h"
#include "FoodProduct.h"
#include "Product.h"
#include "ProductList.h"

void addProducts(ProductList *productList) {
	//	The following for-loop will add 10 random food and non-food items to the list of available products.
	//	The number of items, price of those items, and the sell by dates will all be randomly generated.
	for (int i = 0; i < 10; ++i) {
		QRandomGenerator qRandomGenerator;
		int numberOfItems = QRandomGenerator::global()->bounded(100, 1000);
		double price = QRandomGenerator::global()->bounded(50000) / 100.00;
		QDate sellByDate = QDate::currentDate().addDays(qRandomGenerator.bounded(7, 365));

		if (i % 2 == 0) {
			productList->add(new Product("non-perishable item " + QString::number(i + 1), i + 1, numberOfItems, price));
		} else {
			productList->add(new FoodProduct("perishable item " + QString::number(i + 1), i + 1, numberOfItems, price, sellByDate));
		}
	}
}

void sellProducts(ProductList *productList) {
	//	The following for-loop will make 10 random sales.
	//	The number of items will be randomly generated, within the bounds of the possible number of items.
	for (int i = 0; i < 10; ++i) {
		productList->sell(((i + 1) * 1000) + 1, QRandomGenerator::global()->bounded(1, 100));
	}
}

void removeProducts(ProductList *productList) {
	//	The following for-loop will remove all non-perishable products from the list of available products.
	for (int i = 0; i < 10; i += 2) {
		productList->remove(((i + 1) * 1000) + 1);
	}
}

int main(int argc, char *argv[]) {
	QCoreApplication a(argc, argv);

	ProductList productList;

	addProducts(&productList);

	productList.printAll();

	sellProducts(&productList);

	removeProducts(&productList);

	productList.printAll();

	productList.deleteAll();

	return QCoreApplication::exec();
}