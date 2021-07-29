#include <QString>
#include <utility>
#include "Product.h"

Product::Product(QString d, int sc, int n, double p) {
	m_Description = std::move(d);
	m_SupplierCode = sc;
	m_NoOfItems = n;
	m_PricePerItem = p;
	m_DateSupplied = QDate::currentDate();
}

void Product::sell(int n) {
	m_NoOfItems -= n;
	Transaction transaction(n, m_PricePerItem, QDate::currentDate());
	m_Transactions.append(transaction);
}

int Product::getSupplierCode() {
	return m_SupplierCode;
}

void Product::setProductCode(int pc) {
	m_ProductCode = pc;
}

int Product::getProductCode() {
	return m_ProductCode;
}

QString Product::toString() {
	return QStringLiteral("Description: %0 \nSupplier code: %1 \nNumber of items: %2 \nDate supplied: %3 \nPrice per item: R%4"
						  "\nProduct code: %5")
			.arg(m_Description).arg(getSupplierCode()).arg(m_NoOfItems).arg(m_DateSupplied.toString()).arg(m_PricePerItem)
			.arg(getProductCode());
}

void Product::removeAll() {
	Transaction transaction(m_NoOfItems, 0, QDate::currentDate());
	m_NoOfItems = 0;
}

bool Product::isExpired() {
	return false;
}