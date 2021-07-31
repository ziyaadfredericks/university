#include <QCoreApplication>
#include "Transaction.h"
#include "FoodProduct.h"
#include "Product.h"
#include "ProductList.h"

// I used the following libraries because QRandomGenerator did not seem to work when I tested it with the prescribed version of Qt.
#include <stdlib.h>
#include <time.h>

void addProducts(ProductList *productList) {
	//	Add 10 random perishable and non-perishable items to the list of available products.
	//	The number of items, price of those items, and the sell by dates will all be randomly generated.

	for (int i = 0; i < 10; ++i) {
		srand(time(NULL) + i); // Adding "i" because srand does not produce a different psuedo-random number due to the for-loop executing its next iteration before the system time changes?

		int numberOfItems = rand() % 1000 + 100;
		double price = (rand() % 50000 + 100) / 100.00;
		QDate sellByDate = QDate::currentDate().addDays(rand() % 365 + 7);

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
		productList->sell(((i + 1) * 1000) + 1, rand() % 100 + 1);
	}
}

void removeProducts(ProductList *productList) {
	//	Remove all non-perishable products from the list of available products.
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