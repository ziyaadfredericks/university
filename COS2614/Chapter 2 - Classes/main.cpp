#include <iostream>
#include "person.h"
using namespace std;

int main() {
	Person person;

	person.setName("string name");        
	person.setSurname("string surname");        
	person.setAge(69);        

	cout << person.getName() << endl << person.getSurname() << endl << person.getAge() << endl;

	return 0;
}