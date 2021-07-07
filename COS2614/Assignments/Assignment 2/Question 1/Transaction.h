#include <QString>

#ifndef QUESTION_1_TRANSACTION_H
#define QUESTION_1_TRANSACTION_H

class Transaction {
public:
	Transaction(int m_NoOfItems, double m_PricePerItem, QDate m_TransactionDate);

	QString toString();

private:
	int m_NoOfItems;
	double m_PricePerItem;
	QDate m_TransactionDate;
};

#endif