#ifndef QUESTION_1_FOODPRODUCT_H
#define QUESTION_1_FOODPRODUCT_H

#include <QDate>
#include "Product.h"

class FoodProduct : public Product {
public:
	//FoodProduct(QString d1, int sc1, int n1, double p1, QString d, int sc, int n, double p, QDate sbd);

	FoodProduct(QString d, int sc, int n, double p, QDate sbd);

	void sell();

	QString toString();

	bool isExpired();

private:
	QDate m_SellByDate;
	int DISCOUNT;
};

#endif