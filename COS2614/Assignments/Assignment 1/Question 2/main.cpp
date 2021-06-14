#include <iostream>
#include "Bottle.h"

using namespace std;

void introduction(Bottle *bottles) {
	int ml = 0;

	cout << "Congratulations! You have been given two bottles." << endl;

	cout << "Set the maximum capacity of bottle 1 in millilitres: " << endl;
	cin >> ml;
	bottles[0].setCapacity(ml);

	cout << "Set the maximum capacity of bottle 2 in millilitres: " << endl;
	cin >> ml;
	bottles[1].setCapacity(ml);
}

void mainMenu(int &choice) {
	while (choice < 0 || choice > 2) {
		cout << "\nSelect a bottle: \n0.) Exit program \n1.) Bottle 1 \n2.) Bottle 2" << endl;
		cin >> choice;
	}
}

void bottleMenu(int &choice, int selected) {
	do {
		cout << "\nWhat would you like to do with bottle " << selected << ": \n0.) Exit program \n1.) Set maximum capacity \n2.) Get maximum capacity  \n3.) Set current quantity \n4.) Get current quantity \n5.) Fill bottle up \n6.) Empty bottle \n7.) Go back" << endl;
		cin >> choice;
	} while (choice < 0 || choice > 7);
}

void action(int &choice, Bottle *ptrBottle) {
	int ml = 0;
	switch (choice) {
		case 1:
			cout << "\nBottle capacity(ml): " << endl;
			cin >> ml;
			ptrBottle->setCapacity(ml);
			break;

		case 2:
			cout << "\nBottle capacity: " << ptrBottle->getCapacity() << "ml" << endl;
			break;

		case 3:
			cout << "\nQuantity of liquid in bottle(ml): " << endl;
			cin >> ml;
			ptrBottle->setQuantity(ml);
			break;

		case 4:
			cout << "\nQuantity of liquid in bottle: " << ptrBottle->getQuantity() << "ml" << endl;
			break;

		case 5:
			ptrBottle->fill();
			cout << "\nThe bottle has been filled to " << ptrBottle->getQuantity() << "ml." << endl;
			break;

		case 6:
			ptrBottle->empty();
			cout << "\nThe bottle has been emptied to " << ptrBottle->getQuantity() << "ml." << endl;
			break;

		default:
			break;
	}
}

int main() {
	Bottle bottles[2];
	Bottle *ptrBottle;
	introduction(bottles);

	int choice = -1;
	mainMenu(choice);
	int selected = choice;

	while (choice != 0) {
		ptrBottle = &bottles[selected - 1];

		if (choice == 7) {
			mainMenu(choice);
			selected = choice;
		} else {
			bottleMenu(choice, selected);
			action(choice, ptrBottle);
		}
	}

	return 0;
}