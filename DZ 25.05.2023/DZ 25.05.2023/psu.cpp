#include "psu.h"


psu :: psu(string make, string model, string setialNumber, uint16_t power, uint16_t voltage) : component(make, model, serialNumber)
{
	this->power = power;
	this->voltage = voltage;
}
