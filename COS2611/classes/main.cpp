#include <iostream>
#include "clockType.cpp"
using namespace std;

int main() {
	clockType myClock(1, 2, 3);
	myClock.printTime();
	clockType yourClock;
	yourClock.printTime();

	return 0;
}