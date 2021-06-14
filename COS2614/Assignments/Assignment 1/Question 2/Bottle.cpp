#include <iostream>
#include "Bottle.h"

using namespace std;

int capacity, quantity = 0;
Bottle *ptrBottle = nullptr;

void Bottle::setCapacity(int c) {
	capacity = c;
}

void Bottle::setQuantity(int q) {
	quantity = q;
}

int Bottle::getCapacity() const {
	return capacity;
}

int Bottle::getQuantity() const {
	return quantity;
}

void Bottle::fill() {
	quantity = capacity;
}

void Bottle::empty() {
	quantity = 0;
}

Bottle* Bottle::getPtr() {
	return ptrBottle;
}

void Bottle::setPtr(Bottle *p) {
	ptrBottle = p;
}
