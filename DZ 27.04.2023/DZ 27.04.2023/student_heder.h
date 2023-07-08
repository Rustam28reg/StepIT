#pragma once
#include <string>
using namespace std;

struct student
{
	string surname{};
	string group{};
	int* grade = new int[5]{};

	student();

	student(string _surname, string _group, int* _grade);

};

