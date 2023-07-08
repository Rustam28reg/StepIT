#include "student_heder.h"

student::student() = default;

student::student(string _surname, string _group, int* _grade)
{
	this->surname = _surname;
	this->group = _group;
	this->grade = _grade;
}
