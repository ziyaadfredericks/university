#ifndef QUESTION_2_BOTTLE_H
#define QUESTION_2_BOTTLE_H

class Bottle {
public:
	void setCapacity(int c);

	void setQuantity(int q);

	int getCapacity() const;

	int getQuantity() const;

	void fill();

	void empty();

private:
	int capacity = 0;
	int quantity = 0;
};

#endif