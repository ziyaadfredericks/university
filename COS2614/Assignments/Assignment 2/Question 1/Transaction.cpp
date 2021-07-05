#include <QString>
#include <QDate>
#include "Transaction.h"

QString Transaction::toString() {
	return QStringLiteral("Number of items: %0 \nPrice per item: R%1 \nDate: %2")
			.arg(m_NoOfItems).arg(m_PricePerItem).arg(m_TransactionDate.toString());
}