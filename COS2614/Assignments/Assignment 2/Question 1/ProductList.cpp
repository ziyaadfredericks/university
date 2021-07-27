#include <iostream>
#include "ProductList.h"
#include "Product.h"

int ProductList::add(Product *p) {
	int productCode = p->getSupplierCode() * 1000 + 1;

	while (!ProductList::isEmpty() && codeUsed(productCode)) {
		productCode += 1;
	}

	p->setProductCode(productCode);
	ProductList::append(p);
	return 0;
}

void ProductList::sell(int pc, int n) {
	ProductList::const_iterator i;
	for (i = ProductList::constBegin(); i != ProductList::constEnd(); ++i) {
		Product *product = *i;

		if (product->getProductCode() == pc) {
			product->sell(n);
		}
	}
}

void ProductList::remove(int pc) {
	ProductList::const_iterator i;
	for (i = ProductList::constBegin(); i != ProductList::constEnd(); ++i) {
		Product *product = *i;

		if (product->getProductCode() == pc) {
			product->removeAll();
		}
	}
}

void ProductList::deleteAll() {
	ProductList::clear();
}

bool ProductList::codeUsed(int pc) {
	ProductList::const_iterator i;
	for (i = ProductList::constBegin(); i != ProductList::constEnd(); ++i) {
		Product *product = *i;

		if (product->getProductCode() == pc) {
			return true;
		}
	}
	return false;
}

void ProductList::printAll() {
	ProductList::const_iterator i;
	for (i = ProductList::constBegin(); i != ProductList::constEnd(); ++i) {
		Product *product = *i;
//		product->toString();
		std::cout << product->toString().toStdString() << "\n\n";
	}
}