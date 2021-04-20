#include <iostream>
#include <utility>
#include "Person.h"

using namespace std;


struct PersonInfo {
	string name, surname;
	int age = 0;
};

PersonInfo personInfo;

string Person::getName() {
	return personInfo.name;
}

string Person::getSurname() {
	return personInfo.surname;
}

int Person::getAge() {
	return personInfo.age;
}

void Person::setName(string name) {
	personInfo.name = move(name);
}

void Person::setSurname(string surname) {
	personInfo.surname = move(surname);
}

void Person::setAge(int age) {
	personInfo.age = age;
}
