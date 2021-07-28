#include <QCoreApplication>
#include <iostream>
#include <vector>
#include "Transaction.h"
#include "FoodProduct.h"
#include "Product.h"
#include "ProductList.h"

int main(int argc, char *argv[]) {
	QCoreApplication a(argc, argv);

	ProductList productList;
	Product products[10];

	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) {
			products[i] = Product(QString::number(i + 1), i + 1, (i + 1) * 3, (i + 1) * 17.67);
		} else {
			products[i] = FoodProduct(QString::number(i + 1), i + 1, (i + 1) * 3, (i + 1) * 17.67, QDate::currentDate().addDays(100));
		}
		productList.add(&products[i]);
	}

	productList.printAll();

	return QCoreApplication::exec();
}
