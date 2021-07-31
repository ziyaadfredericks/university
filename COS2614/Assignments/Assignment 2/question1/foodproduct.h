#ifndef FOODPRODUCT_H
#define FOODPRODUCT_H

#include <QDate>
#include "product.h"

class FoodProduct : public Product {
public:
	FoodProduct(QString d, int sc, int n, double p, QDate sbd);

	void sell(int n);

	QString toString();

	bool isExpired();

private:
	QDate m_SellByDate;
	int DISCOUNT;
};

#endif