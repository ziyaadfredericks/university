#include <iostream>
#include <sstream>
#include "person.h"
using namespace std;

struct PersonInfo {
	string name, surname;
	int age;
};

PersonInfo personInfo;

void setName(string name) {
	personInfo.name = name;
}

void setSurname(string surname) {
	personInfo.surname = surname;
}

void setAge(int age) {
	personInfo.age = age;
}

string getName() {
	return personInfo.name;
}

string getSurname() {
	return personInfo.surname;
}

int getAge() {
	return personInfo.age;
}