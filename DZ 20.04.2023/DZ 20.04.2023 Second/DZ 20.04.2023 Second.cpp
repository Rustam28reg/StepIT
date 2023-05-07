#include <iostream>
using namespace std;

struct student
{
	char* name;
	char* surname;
	char* patromynic;
	int* marks;
};

void printStudents(student* _students, int k)
{
	for (size_t i = 0; i < k; i++)
	{
		cout << i+1 << endl;
		cout << "Name: " << _students[i].name << endl;
		cout << "Surname: " << _students[i].surname << endl;
		cout << "Patrominyc: " << _students[i].patromynic << endl;
	}
}

void printOneStudent(student* _students, int k)
{
	cout << "Name: " << _students[k].name << endl;
	cout << "Surname: " << _students[k].surname << endl;
	cout << "Patrominyc: " << _students[k].patromynic << endl;

}

void prinMarks(student* _students, int k)
{
	cout << "Name: " << _students[k].name << endl;
	cout << "Surname: " << _students[k].surname << endl;
	cout << "Patrominyc: " << _students[k].patromynic << endl;

	for (size_t i = 0; i < 5; i++)
	{
		cout << i + 1 << ".Mark - " << _students[k].marks[i] << endl;
	}
}

void createStudent(student* _students, int k)
{

	_students[k].name = new char[30] {};
	_students[k].surname = new char[30] {};
	_students[k].patromynic = new char[30] {};
	_students[k].marks = new int[5] {};

	cout << "Enter name: ";
	cin.getline(_students[k].name, 30);

	cout << "Enter surname: ";
	cin.getline(_students[k].surname, 30);

	cout << "Enter surname: ";
	cin.getline(_students[k].patromynic, 30);

}

void getMarks(student* _students, int k)
{

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter " << i + 1 << " mark 1 - 12: ";
		cin >> _students[k].marks[i];
	}
}

int AverageMark(student* _students, int k)
{
	int avarage{};
		for (size_t j = 0; j < 5; j++)
		{
			avarage += _students[k].marks[j];
		}
	
	avarage = avarage / 5;

	return avarage;
}

int main()
{
	student* students = new student[5]{};
	int k{}, m{}, choice{};
	char* name1 = new char[30] {};

	while (true)
	{
		cout
			<< "1. Add student" << endl
			<< "2. Add grade" << endl
			<< "3. Show all students" << endl
			<< "4. Show grade" << endl
			<< "5. Show debtors" << endl;

		cout << "Enter choice - "; cin >> choice;
		getchar();

		switch (choice)
		{
		case 1:
			system("cls");
			createStudent(students, k);
			k++;
			break;
		case 2:
		{
			system("cls");
			cout << "Enter student name - ";
			cin.getline(name1, 30);
			int index{};
			for (size_t i = 0; i < k; i++)
			{
				for (size_t j = 0; students[i].name[j] != '\0'; j++)
				{
					if (students[i].name[j] == name1[j])
					{
						index++;
					}
					else
					{
						break;
					}
					if (index == strlen(name1));
					{
						getMarks(students, i);
						break;
					}
				}
			}
			break;
		}
		case 3:
			system("cls");
			printStudents(students, k);
			break;
		case 4:
		{
			system("cls");
			cout << "Enter student name - ";
			cin.getline(name1, 30);
			int index{};
			for (size_t i = 0; i < k; i++)
			{
				for (size_t j = 0; j < 30; j++)
				{
					if (students[i].name[j] == name1[j])
					{
						index++;
					}
					else
					{
						break;
					}
					if (index == 29)
					{
						prinMarks(students, i);
					}
				}
			}
			break;
		}
		case 5:
			system("cls");
			for (size_t i = 0; i < k; i++)
			{
				if (AverageMark(students, i) < 7)
				{
					printOneStudent(students, i);
					cout << "Averege mark - " << AverageMark(students, i) << endl;
					cout << endl;
				}
			}
			break;
		default:
			break;
		}

	}

	return 0;
}

