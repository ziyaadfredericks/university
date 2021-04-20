#include <iostream>
#include "Person.h"

using namespace std;

int main() {
	string name, surname;
	int age;

	cout << "Name: ";
	cin >> name;

	cout << "\bSurname: ";
	cin >> surname;

	cout << "\bAge: ";
	cin >> age;

	Person::setName(name);
	Person::setSurname(surname);
	Person::setAge(age);

	cout << endl << Person::getName() << endl;
	cout << Person::getSurname() << endl;
	cout << Person::getAge() << endl;

	return 0;
}