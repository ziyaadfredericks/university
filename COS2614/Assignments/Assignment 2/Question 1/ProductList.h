#ifndef QUESTION_1_PRODUCTLIST_H
#define QUESTION_1_PRODUCTLIST_H

#include "Product.h"

class ProductList : QList<Product *> {
public:
	int add(Product *p);

	void sell(int pc, int n);

	void remove(int pc);

	void deleteAll();

private:
	bool codeUsed(int pc);
};

#endif