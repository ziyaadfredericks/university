#include <iostream>
#include "linkedListType.h"

template<class Type>
Type linkedListType<Type>::max() {
	Type maximum;

	if (first != NULL) {
		maximum = first->info;
	}

	nodeType <Type> *current;
	current = first->link;

	while (current != NULL) {
		if (current->info > maximum) {
			maximum = current->info;
		}
	}

	return maximum;
}