#include <iostream>
using namespace std;

class student {
private:
	string name;
	string surname;
	string patronimyc;
public:
	student() = default;
	student(string _name, string _surname, string _patronimyc)
	{
		this->name = _name;
		this->surname = _surname;
		this->patronimyc = _patronimyc;
	}

	friend ostream& operator << (ostream& os, const student Student)
	{
		os
			<< Student.name << endl
			<< Student.surname << endl
			<< Student.patronimyc << endl;

		return os;
	}


};
