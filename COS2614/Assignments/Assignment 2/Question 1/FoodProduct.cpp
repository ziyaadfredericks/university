#include "FoodProduct.h"
#include "Product.h"

FoodProduct::FoodProduct(QString d, int sc, int n, double p, QDate sbd) : Product(d, sc, n, p) {
	m_SellByDate = sbd;
}

void FoodProduct::sell(int n) {
	Product::sell(n);
}

QString FoodProduct::toString() {
	QString qString = Product::toString() + "\n" + m_SellByDate.toString() + "\n";
	return qString;
}

bool FoodProduct::isExpired() {
	// Assuming that the "sell by date" is the "expiry date."
	if (QDate::currentDate().daysTo(m_SellByDate) <= 0) {
		return true;
	} else {
		return false;
	}
}

FoodProduct::FoodProduct() = default;
