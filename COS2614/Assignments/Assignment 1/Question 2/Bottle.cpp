#include <iostream>
#include "Bottle.h"

using namespace std;

void Bottle::setCapacity(int c) {
	capacity = c;

	if(capacity < quantity) {
		cout << "The bottle has overflowed. The quantity of liquid in the bottle will now be set to: " << capacity << "ml." << endl;
		quantity = capacity;
	}
}

void Bottle::setQuantity(int q) {
	if (q <= capacity) {
		quantity = q;
	} else {
		cout << "The bottle has overflowed. The quantity of liquid in the bottle will now be set to: " << capacity << "ml." << endl;
		quantity = capacity;
	}
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