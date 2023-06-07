#include <iostream>
#include <string>
#include "psu.h"
#include "component.h"
using namespace std;

psu :: psu() = default;
psu :: psu(uint16_t power, uint16_t voltage) : component(make, model, serialNumber)
{
	this->power = power;
	this->voltage = voltage;
}
