#ifndef QUESTION_1_FOODPRODUCT_H
#define QUESTION_1_FOODPRODUCT_H

#include <QDate>
#include "Product.h"

class FoodProduct : public Product {
public:
	FoodProduct();

	FoodProduct(QString d, int sc, int n, double p, QDate sbd);

	void sell(int n);

	QString toString();

	bool isExpired();

private:
	QDate m_SellByDate;
	const int DISCOUNT = 0;
};

#endif