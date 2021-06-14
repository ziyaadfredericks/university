#ifndef QUESTION_2_BOTTLE_H
#define QUESTION_2_BOTTLE_H

class Bottle {
public:
	void setCapacity(int c);

	Bottle* getPtr();
	void setPtr(Bottle *p);

	void setQuantity(int q);

	int getCapacity() const;

	int getQuantity() const;

	void fill();

	void empty();

private:
	Bottle *ptrBottle;
	int capacity;
	int quantity;
};

#endif