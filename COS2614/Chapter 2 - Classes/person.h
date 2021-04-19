#ifndef _STRUCT_H_
#define _STRUCT_H_

#include <string>
using namespace std;

class Person {
	public:
		void setName(string name);        
		void setSurname(string surname);        
		void setAge(int age);        

		string getName();        
		string getSurname();        
		int getAge();        
		struct PersonInfo;

	private:
};

#endif