# include "excell_stud.h"

void print_excellent_stud(student* _student, int& _len)
{
	int num{};
	for (size_t i = 0; i < _len; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (_student[i].grade[j] == 5)
			{
				num++;
			}
		}
		if (num >= 4)
		{
			cout << _student[i].surname << endl;				
		}
	}
}
