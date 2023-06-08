#include <iostream>
using namespace std;
class fraction
{
public:
	int numerator;
	int denominator;
	fraction operator+(fraction& _num2) // �������� ������
	{
		int num{ 1 }, counter1{}, counter2{};

		while (true)
		{
			if ((num % this->denominator == 0) && (num % _num2.denominator == 0))
			{
				break;
			}
			else
			{
				num++;
			}
		}
		counter1 = num / this->denominator;
		counter2 = num / _num2.denominator;

		numerator = numerator * counter1;
		_num2.numerator = _num2.numerator * counter2;

		this->numerator = this->numerator + _num2.numerator;
		this->denominator = num;

		return *this;
	}

	fraction operator-(fraction& _num2) // �������� ������
	{
		int num{ 1 }, counter1{}, counter2{};

		while (true)
		{
			if ((num % this->denominator == 0) && (num % _num2.denominator == 0))
			{
				break;
			}
			else
			{
				num++;
			}
		}
		counter1 = num / this->denominator;
		counter2 = num / _num2.denominator;

		numerator = numerator * counter1;
		_num2.numerator = _num2.numerator * counter2;

		this->numerator = this->numerator - _num2.numerator;
		this->denominator = num;

		return *this;
	}

	fraction operator*(fraction& _num2) // ��������� ������
	{
		int len{};

		// ���������� ������ ����� 
		if (this->numerator < this->denominator)
		{
			len = this->numerator;
		}
		else
		{
			len = this->denominator;
		}
		for (size_t i = len; i > 0; i--)
		{
			if ((this->numerator % i == 0) && (this->denominator % i == 0))
			{
				this->numerator /= i;
				this->denominator /= i;
				break;
			}
		}

		// ���������� ������ ����� 
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


		// ���������� �� ���������  1

		if (_num2.numerator < this->denominator)
		{
			len = _num2.numerator;
		}
		else
		{
			len = this->denominator;
		}

		for (size_t i = len; i > 0; i--)
		{
			if ((_num2.numerator % i == 0) && (this->denominator % i == 0))
			{
				_num2.numerator /= i;
				this->denominator /= i;
				break;
			}
		}


		// ���������� �� ��������� 2

		if (this->numerator < _num2.denominator)
		{
			len = this->numerator;
		}
		else
		{
			len = _num2.denominator;
		}

		for (size_t i = len; i > 0; i--)
		{
			if ((this->numerator % i == 0) && (_num2.denominator % i == 0))
			{
				this->numerator /= i;
				_num2.denominator /= i;
				break;
			}
		}

		// ��������� ��������� � �����������.

		this->numerator *= _num2.numerator;
		this->denominator *= _num2.denominator;

		return *this;

	}

	fraction operator/(fraction& _num2) // ������� ������
	{
		int len{}, num{};

		num = _num2.numerator;
		_num2.numerator = _num2.denominator;
		_num2.denominator = num;

		// ���������� ������ ����� 
		if (this->numerator < this->denominator)
		{
			len = this->numerator;
		}
		else
		{
			len = this->denominator;
		}
		for (size_t i = len; i > 0; i--)
		{
			if ((this->numerator % i == 0) && (this->denominator % i == 0))
			{
				this->numerator /= i;
				this->denominator /= i;
				break;
			}
		}

		// ���������� ������ ����� 
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


		// ���������� �� ���������  1

		if (_num2.numerator < this->denominator)
		{
			len = _num2.numerator;
		}
		else
		{
			len = this->denominator;
		}

		for (size_t i = len; i > 0; i--)
		{
			if ((_num2.numerator % i == 0) && (this->denominator % i == 0))
			{
				_num2.numerator /= i;
				this->denominator /= i;
				break;
			}
		}


		// ���������� �� ��������� 2

		if (this->numerator < _num2.denominator)
		{
			len = this->numerator;
		}
		else
		{
			len = _num2.denominator;
		}

		for (size_t i = len; i > 0; i--)
		{
			if ((this->numerator % i == 0) && (_num2.denominator % i == 0))
			{
				this->numerator /= i;
				_num2.denominator /= i;
				break;
			}
		}

		// ��������� ��������� � �����������.

		this->numerator *= _num2.numerator;
		this->denominator *= _num2.denominator;

		return *this;
	}


};