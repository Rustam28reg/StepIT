#include "add_stud.h"

void add_student(student* _student, int& _len, int& _capacity)
{
	int num{1};
	if (_len == _capacity)
	{
		_capacity += _capacity / 2;

		student* new_student = new student[_capacity]{};

		for (size_t i = 0; i <= _len; i++)
		{
			new_student[i] = _student[i];
		}
		delete[] _student;
		_student = new_student;
		delete[] new_student;
	}

	cout << "Enter student surname - "; cin >> _student[_len].surname;
	cout << "Enter student group - "; cin >> _student[_len].group;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Enter " << num << " student grate - "; cin >> _student[_len].grade[i];
		num++;
	}

}

