#include <iostream>
#include "productlist.h"
#include "product.h"
#include "foodproduct.h"

int ProductList::add(Product *p) {
	int productCode = p->getSupplierCode() * 1000 + 1;

	while (!this->isEmpty() && codeUsed(productCode)) {
		productCode += 1;
	}

	p->setProductCode(productCode);
	this->append(p);
	return 0;
}

void ProductList::sell(int pc, int n) {
	ProductList::const_iterator i;
	for (i = this->constBegin(); i != this->constEnd(); ++i) {
		Product *product = *i;

		if (product->getProductCode() == pc) {
			product->sell(n);
		}
	}
}

void ProductList::remove(int pc) {
	ProductList::const_iterator i;
	for (i = this->constBegin(); i != this->constEnd(); ++i) {
		Product *product = *i;

		if (product->getProductCode() == pc) {
			product->removeAll();
		}
	}
}

void ProductList::deleteAll() {
	ProductList::const_iterator i;
	for (i = this->constBegin(); i != this->constEnd(); ++i) {
		delete *i;
	}
	this->clear();
}

bool ProductList::codeUsed(int pc) {
	ProductList::const_iterator i;
	for (i = this->constBegin(); i != this->constEnd(); ++i) {
		Product *product = *i;

		if (product->getProductCode() == pc) {
			return true;
		}
	}
	return false;
}