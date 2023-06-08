#include <iostream>
#include "student.h"
using namespace std;

class classRoom {
private:
	string nameClass{};
	uint16_t count{};
	uint16_t capacity{};
	student* stud = new student[count];

public:
	classRoom() = default;
	classRoom(string _name, uint16_t _count, uint16_t _capacity)
	{
		this->nameClass = _name;
		this->count= _count;
		this->capacity = _capacity;
	}

	friend ostream& operator << (ostream& os, const classRoom clas)
	{
		os
			<< clas.nameClass << endl
			<< clas.count << endl
			<< clas.capacity << endl;
		for (uint16_t i = 0; i < clas.count ; i++)
		{
			os << clas.stud[i] << endl;
		}			

		return os;
	}


};