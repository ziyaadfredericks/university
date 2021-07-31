#ifndef QUESTION_1_TRANSACTION_H
#define QUESTION_1_TRANSACTION_H

#include <QString>
#include <QDate>

class Transaction {
public:
	Transaction(int n, double p, QDate td);

	QString toString();

private:
	int m_NoOfItems;
	double m_PricePerItem;
	QDate m_TransactionDate;
};

#endif