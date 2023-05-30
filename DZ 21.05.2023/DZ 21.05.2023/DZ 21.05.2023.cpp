#include <iostream>
using namespace std;
class fraction
{
public:
	int numerator;
	int denominator;

	void add(fraction _num2) // Сложение дробей
	{
		int num{1}, counter1{}, counter2{};

		while (true)
		{
			if ((num % denominator == 0) && (num % _num2.denominator == 0))
			{
				break;
			}
			else
			{
				num++;
			}
		}
		counter1 = num / denominator;
		counter2 = num / _num2.denominator;

		numerator = numerator * counter1;
		_num2.numerator = _num2.numerator * counter2;

		numerator = numerator + _num2.numerator;
		denominator = num;
	}

	void subtraction(fraction _num2) // Разность дробей
	{
		int num{ 1 }, counter1{}, counter2{};

		while (true)
		{
			if ((num % denominator == 0) && (num % _num2.denominator == 0))
			{
				break;
			}
			else
			{
				num++;
			}
		}
		counter1 = num / denominator;
		counter2 = num / _num2.denominator;

		numerator = numerator * counter1;
		_num2.numerator = _num2.numerator * counter2;

		numerator = numerator - _num2.numerator;
		denominator = num;
	}

	void multiplication(fraction _num2) // Умножение дробей
	{
		int len{};

		// сокращение первой дроби 
		if (numerator < denominator)
		{
			len = numerator;			
		}
		else
		{
			len = denominator;
		}
		for (size_t i = len; i > 0; i--)
		{
			if ((numerator % i == 0) && (denominator % i == 0))
			{
				numerator /= i;
				denominator /= i;
				break;
			}
		}
				
		// сокращение второй дроби 
		if (_num2.numerator < _num2.denominator)
		{			
			len = _num2.numerator;
		}
		else
		{
			len = _num2.denominator;
		}

		for (size_t i = len; i > 0; i--)
		{
			if ((_num2.numerator % i == 0) && (_num2.denominator % i == 0))
			{
				_num2.numerator /= i;
				_num2.denominator /= i;
				break;
			}
		}


		// сокращение по диогонали  1

		if (_num2.numerator < denominator)
		{
			len = _num2.numerator;
		}
		else
		{
			len = denominator;
		}

		for (size_t i = len; i > 0; i--)
		{
			if ((_num2.numerator % i == 0) && (denominator % i == 0))
			{
				_num2.numerator /= i;
				denominator /= i;
				break;
			}
		}


		// сокращение по диагонали 2

		if (numerator < _num2.denominator)
		{
			len = numerator;
		}
		else
		{
			len = _num2.denominator;
		}

		for (size_t i = len; i > 0; i--)
		{
			if ((numerator % i == 0) && (_num2.denominator % i == 0))
			{
				numerator /= i;
				_num2.denominator /= i;
				break;
			}
		}

		// умножение числителя и знаменатели.

		numerator *= _num2.numerator;
		denominator *= _num2.denominator;

	}

	void division(fraction _num2) // Деление дробей
	{
		int len{}, num{};

		num = _num2.numerator;
		_num2.numerator = _num2.denominator;
		_num2.denominator = num;
		
		// сокращение первой дроби 
		if (numerator < denominator)
		{
			len = numerator;
		}
		else
		{
			len = denominator;
		}
		for (size_t i = len; i > 0; i--)
		{
			if ((numerator % i == 0) && (denominator % i == 0))
			{
				numerator /= i;
				denominator /= i;
				break;
			}
		}

		// сокращение второй дроби 
		if (_num2.numerator < _num2.denominator)
		{
			len = _num2.numerator;
		}
		else
		{
			len = _num2.denominator;
		}

		for (size_t i = len; i > 0; i--)
		{
			if ((_num2.numerator % i == 0) && (_num2.denominator % i == 0))
			{
				_num2.numerator /= i;
				_num2.denominator /= i;
				break;
			}
		}


		// сокращение по диогонали  1

		if (_num2.numerator < denominator)
		{
			len = _num2.numerator;
		}
		else
		{
			len = denominator;
		}

		for (size_t i = len; i > 0; i--)
		{
			if ((_num2.numerator % i == 0) && (denominator % i == 0))
			{
				_num2.numerator /= i;
				denominator /= i;
				break;
			}
		}


		// сокращение по диагонали 2

		if (numerator < _num2.denominator)
		{
			len = numerator;
		}
		else
		{
			len = _num2.denominator;
		}

		for (size_t i = len; i > 0; i--)
		{
			if ((numerator % i == 0) && (_num2.denominator % i == 0))
			{
				numerator /= i;
				_num2.denominator /= i;
				break;
			}
		}

		// умножение числителя и знаменатели.

		numerator *= _num2.numerator;
		denominator *= _num2.denominator;

	}



};


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
		num1.add(num2);
		break;
	case 2:
		num1.subtraction(num2);
		break;
	case 3:
		num1.multiplication(num2);
		break;
	case 4:
		num1.division(num2);
		break;
	default:
		break;
	}

	cout << "Result - " << num1.numerator << '/' << num1.denominator << endl;

	return 0;

}

