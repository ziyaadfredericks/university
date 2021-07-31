#include <QCoreApplication>
#include "transaction.h"
#include "foodproduct.h"
#include "product.h"
#include "productlist.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>

void addProducts(ProductList *productList) {
	//	Add 10 random perishable and non-perishable items to the list of available products.
	//	The number of items, price of those items, and the sell by dates will all be randomly generated.

	srand((unsigned) time(0));
	for (int i = 0; i < 10; ++i) {
		int numberOfItems = (rand() % 1000) + 100;
		double price = ((rand() % 50000) + 100) / 100.00;
		QDate sellByDate = QDate::currentDate().addDays((rand() % 365) + 7);

		if (i % 2 == 0) {
			productList->add(new Product("non-perishable item " + QString::number(i + 1), i + 1, numberOfItems, price));
		} else {
			productList->add(new FoodProduct("perishable item " + QString::number(i + 1), i + 1, numberOfItems, price, sellByDate));
		}
	}
}

void sellProducts(ProductList *productList) {
	//	The number of items will be randomly generated, within the bounds of the possible number of items.
	for (int i = 0; i < 10; ++i) {
		srand(time(NULL) + i);
		productList->sell(((i + 1) * 1000) + 1, (rand() % 100) + 1);
	}
}

void removeProducts(ProductList *productList) {
	//	Remove all non-perishable products from the list of available products.
	for (int i = 0; i < 10; i += 2) {
		productList->remove(((i + 1) * 1000) + 1);
	}
}

void heading() {
	for (int i = 0; i < 65; ++i) {
		std::cout << "*";
	}

	std::cout<< "\n* MZ Fredericks \n* 11303867 \n* COS2614 \n* Assignment 2 \n* This program will test all member functions of ProductList." << std::endl;

	for (int i = 0; i < 65; ++i) {
		std::cout << "*";
	}

	std::cout << "\n\n\n";
}

void printAll(ProductList *productList) {
	int j = 0;
	for (ProductList::const_iterator i = productList->constBegin(); i != productList->constEnd(); ++i) {
		if (j % 2 == 0) {
			Product *product = *i;
			std::cout << product->toString().toStdString() << "\n\n";
		} else {
			FoodProduct *product = (FoodProduct *) *i;
			std::cout << product->toString().toStdString() << "\n";
		}
		j++;
	}
}

int main(int argc, char *argv[]) {
	QCoreApplication a(argc, argv);

	heading();

	ProductList productList;

	std::cout << "*ADD PRODUCTS TO LIST THEN PRINT LIST OF PRODUCTS*" << "\n\n";
	addProducts(&productList);
	printAll(&productList);

	std::cout << "\n*SELL ITEMS THEN PRINT LIST OF PRODUCTS*" << "\n\n";
	sellProducts(&productList);
	printAll(&productList);

	std::cout << "\n*REMOVE NON-PERISHABLE PRODUCTS THEN PRINT LIST OF PRODUCTS*" << "\n\n";
	removeProducts(&productList);
	printAll(&productList);

	productList.deleteAll();

	return QCoreApplication::exec();
}