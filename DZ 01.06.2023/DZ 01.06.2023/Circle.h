#include <iostream>
using namespace std;

class Circle
{
public:
	uint16_t radius{};
	uint16_t circleLenght{};

	Circle() = default;
	Circle(uint16_t _radius, uint16_t _circleLenght)
	{
		this->radius = _radius;
		this->circleLenght = _circleLenght;
	}

	bool operator==(const Circle &other) const 
	{
		return this->radius == other.radius;
	}

	bool operator>(const Circle& other) const
	{
		return this->circleLenght > other.circleLenght;
	}

	uint16_t operator+=(Circle& other)
	{
		return this->circleLenght = this->circleLenght + other.circleLenght;
	}

	uint16_t operator-=(Circle& other)
	{
		return this->circleLenght = this->circleLenght - other.circleLenght;
	}
};
