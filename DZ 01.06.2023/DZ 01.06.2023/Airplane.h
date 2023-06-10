#include <iostream>
using namespace std;

class Airplane
{
public:
	string type{};
	int passengers{};
	int passengersCapacity{};

	Airplane() = default;
	Airplane(string _type, int _passengers, int _passengersCapacity)
	{
		this->type = _type;
		this->passengers = _passengers;
		this->passengersCapacity = _passengersCapacity;
	}

	bool operator==(const Airplane& other)const
	{
		return this->type == other.type;
	}

	Airplane operator++()
	{
		this->passengers = this->passengers + 1;

		return *this;
	}

	Airplane operator--()
	{
		this->passengers = this->passengers - 1;

		return *this;
	}

	bool operator>(const Airplane& other)const
	{
		return this->passengersCapacity > other.passengersCapacity;
	}
	bool operator<(const Airplane& other)const
	{
		return this->passengersCapacity < other.passengersCapacity;
	}


};