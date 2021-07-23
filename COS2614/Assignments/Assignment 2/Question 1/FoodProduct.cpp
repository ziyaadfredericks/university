#include "FoodProduct.h"
#include "Product.h"

FoodProduct::FoodProduct(QString d, int sc, int n, double p, QDate sbd) : Product(d, sc, n, p) {
	m_SellByDate = sbd;
}

void FoodProduct::sell(int n) {
	Product::sell(n);
}

QString FoodProduct::toString() {
	return Product::toString();
}

bool FoodProduct::isExpired() {
	// Assuming that the "sell by date" is the "expiry date."
	if (QDate::currentDate().daysTo(m_SellByDate) <= 0) {
		return true;
	} else {
		return false;
	}
}