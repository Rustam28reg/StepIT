#include <iostream>
#include "student_heder.h"
#include "add_stud.h"
#include "excell_stud.h"
#include "underach.h"
#include <string>
using namespace std;


int main()
{
	int len{}, capacity{ 10 }, choice{};
	student* Student = new student[capacity]{};

	while (true)
	{
		cout << "1. Add student " << endl
			<< "2. Print all excellent students" << endl
			<< "3. Underachieving students" << endl
			<< "Enter choice - "; cin >> choice;
		system("cls");

		switch (choice)
		{
		case 1:
			add_student(Student, len, capacity);
			len++;
			system("cls");
			break;
		case 2:
			print_excellent_stud(Student, len);
			break;
		case 3:
			print_underachieving_students(Student, len);
		default:
			break;
		}

	}


	return 0;
}
