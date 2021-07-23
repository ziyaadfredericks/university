#include <QString>
#include <QDate>
#include "Transaction.h"

Transaction::Transaction(int m_NoOfItems, double m_PricePerItem, QDate m_TransactionDate) {
	m_NoOfItems = m_NoOfItems;
	m_PricePerItem = m_PricePerItem;
	m_TransactionDate = m_TransactionDate;
}

QString Transaction::toString() {
	return QStringLiteral("Number of items: %0 \nPrice per item: R%1 \nDate: %2")
			.arg(m_NoOfItems).arg(m_PricePerItem).arg(m_TransactionDate.toString());
}