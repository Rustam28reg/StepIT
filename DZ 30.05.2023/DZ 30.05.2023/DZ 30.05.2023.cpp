#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{

	fraction num1{}, num2{};
	int choice{};

	cout << "1. Add" << endl
		<< "2. Substraction" << endl
		<< "3. Multiplication" << endl
		<< "4. division" << endl
		<< "Enter choice - "; cin >> choice;
	system("cls");


	cout << "Enter first numerator - "; cin >> num1.numerator;
	cout << "Enter second denominator - "; cin >> num1.denominator;

	cout << "Enter first numerator - "; cin >> num2.numerator;
	cout << "Enter second denominator - "; cin >> num2.denominator;

	system("cls");

	switch (choice)
	{
	case 1:
		num1 = num1 + num2;
		break;
	case 2:
		num1 = num1 - num2;
		break;
	case 3:
		num1 = num1 * num2;
		break;
	case 4:
		num1 = num1 / num2;
		break;
	default:
		break;
	}

	cout << "Result - " << num1.numerator << '/' << num1.denominator << endl;

	return 0;

}

