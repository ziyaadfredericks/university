#include "FoodProduct.h"
#include "Product.h"

//FoodProduct::FoodProduct(QString d1, int sc1, int n1, double p1, QString d, int sc, int n, double p, QDate sbd) : Product(d1, sc1, n1, p1) {
FoodProduct::FoodProduct(QString d, int sc, int n, double p, QDate sbd) : Product(d, sc, n, p) {
	this->m_SellByDate = sbd;
	Product(d, sc, n, p);
}

void FoodProduct::sell() {
}

QString FoodProduct::toString() {
	return QString();
}

bool FoodProduct::isExpired() {
	return false;
}