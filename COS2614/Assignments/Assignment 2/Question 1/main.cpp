#include <QCoreApplication>
#include <iostream>
#include "Transaction.h"
#include "FoodProduct.h"
#include "Product.h"
#include "ProductList.h"

int main(int argc, char *argv[]) {
	QCoreApplication a(argc, argv);

	ProductList productList;

	Product *product[10];

	for (int i = 0; i < 10; ++i) {
		Product prod(QString::number(i + 1), i + 1, (i + 1) * 3, (i + 1) * 17.67);
		product[i] = &prod;
	}

	productList.printAll();

	return QCoreApplication::exec();
}
