#ifndef QUESTION_1_PRODUCT_H
#define QUESTION_1_PRODUCT_H

#include <QString>
#include <QDate>
#include <QList>
#include "Transaction.h"

class Product {
public:
	Product(QString d, int sc, int n, double p);

	void sell(int n);

	int getSupplierCode();

	void setProductCode(int pc);

	int getProductCode();

	QString toString();

	void removeAll();

	bool isExpired();

private:
	QString m_Description;
	int m_SupplierCode;
	int m_NoOfItems;
	QDate m_DateSupplied;
	double m_PricePerItem;
	int m_ProductCode;
	QList<Transaction> m_Transactions;
};

#endif