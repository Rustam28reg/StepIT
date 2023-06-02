#include <iostream>
#include "Hed.h"
using namespace std;


	int main()
	{
		int choice{}, choice2{}, k{}, j{}, m{};
        student* stud = new student[20]{};

		cout << "Authorization" << endl
			<< "1. Administrator" << endl
			<< "2. Teacher" << endl
			<< "Enter choice - ";  cin >> choice;


		while (true)
		{
			m = 0;

			cout << "1. Create student" << endl
				<< "2. Create school" << endl
				<< "3. Print student" << endl
				<< "4. Print school" << endl
				<< "Enter choice - "; cin >> choice2;

			switch (choice2)
			{
			case 1:
				createStudentData(stud[k], choice);
				k++;
				break;
			case 2:
				createSchoolData(stud[j]);
				j++;
				break;
			case 3:
				printStudentData(*stud, m);
				break;
			case 4:
				printSchoolData(*stud, m);
				break;
			default:
				break;
			}
		}



		return 0;

	}


