#include "cooler.h"



cooler::cooler(string make, string model, string setialNumber, string coolingTipe, string appointment) : component(make, model, serialNumber)
{
	this->coolingTipe = coolingTipe;
	this->appointment = appointment;
}
