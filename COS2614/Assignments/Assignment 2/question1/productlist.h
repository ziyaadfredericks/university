#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H

#include "product.h"

class ProductList : QList<Product *> {
public:
	int add(Product *p);

	void sell(int pc, int n);

	void remove(int pc);

	void deleteAll();

	void printAll();

private:
	bool codeUsed(int pc);
};

#endif