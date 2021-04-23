#include <iostream>
#include "Bottle.h"

using namespace std;

void introduction() {

}

void mainMenu(char &choice) {
	cout << "Select a bottle: \n1.) Bottle 1 \n2.) Bottle 2 \n\nEnter 0 to exit program." << endl;
	cin >> choice;
}

void bottleMenu(char &choice) {
	cout << "What would you like to do with bottle " << choice << ": \n1.) Set maximum capacity \n2.) Set current quantity \n3.) Fill bottle up \n4.) Empty bottle \n5.) Go back" << endl;
	cin >> choice;
}

int main() {
	Bottle bottle1{};
	Bottle bottle2{};
	int ml = 0;

	cout << "Congratulations! You have been given two bottles." << endl;
z
	cout << "Set the capacity of the first bottle in millilitres: " << endl;
	cin >> ml;
	bottle1.setCapacity(ml);

	cout << "Set the capacity of the second bottle in millilitres: " << endl;
	cin >> ml;
	bottle2.setCapacity(ml);

	char choice = 0;
	while (choice != '0') {
		mainMenu(choice);

		if (choice != '0') {
			bottleMenu(choice);
		}
	}

	return 0;
}
