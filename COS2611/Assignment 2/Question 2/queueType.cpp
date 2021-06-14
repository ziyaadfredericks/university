#include <iostream>
#include "queueType.h"

template<class Type>
bool queueType<Type>::identicalQ(queueType<Type> Q1, queueType<Type> Q2) {
	if ((Q1.link == NULL && Q2.link != NULL) || (Q1.link != NULL && Q2.link == NULL) || (Q1.info != Q2.info)) {
		return false;
	} else if (Q1.link != NULL && Q2.link != NULL) {
		identicalQ(Q1.link, Q2.link);
	} else {
		return true;
	}
}