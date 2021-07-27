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

	std::vector<Product> products;

	for (int i = 0; i < 3; ++i) {
		Product prod(QString::number(i + 1), i + 1, (i + 1) * 3, (i + 1) * 17.67);
		products.push_back(prod);
	}

	productList.printAll();

	return QCoreApplication::exec();
}
