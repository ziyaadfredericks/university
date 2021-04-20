#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <string>

using namespace std;

class Person {
public:
	static void setName(string name);

	static void setSurname(string surname);

	static void setAge(int age);

	static string getName();

	static string getSurname();

	static int getAge();

private:
	static string yeet;
};

#endif