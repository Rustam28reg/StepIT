#include "underach.h"

void print_underachieving_students(student* _student, int _len)
{
	int num{};
	for (size_t i = 0; i < _len; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (_student[i].grade[j] < 3)
			{
				num++;
			}
		}
		if (num > 2)
		{
			cout << _student[i].surname << endl;
		}
	}
}