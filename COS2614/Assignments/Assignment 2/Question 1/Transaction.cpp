#include <QString>
#include <QDate>
#include "Transaction.h"

Transaction::Transaction(int n, double p, QDate td) {
	m_NoOfItems = n;
	m_PricePerItem = p;
	m_TransactionDate = td;
}

QString Transaction::toString() {
	return QStringLiteral("Number of items: %0 \nPrice per item: R%1 \nDate: %2")
			.arg(m_NoOfItems).arg(m_PricePerItem).arg(m_TransactionDate.toString());
}