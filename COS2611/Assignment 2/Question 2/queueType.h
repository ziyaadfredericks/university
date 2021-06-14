#ifndef QUESTION_2_QUEUETYPE_H
#define QUESTION_2_QUEUETYPE_H

template<class Type>
class queueType {
public:
	bool identicalQ (queueType<Type> Q1, queueType<Type> Q2);
	Type info;
	queueType<Type> *link;
};

#endif