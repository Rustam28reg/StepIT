#include <iostream>
#include <string>
#include "cooler.h"
#include "component.h"
using namespace std;


cooler::cooler() = default;
cooler::cooler(string coolingTipe, string appointment) : component(make, model, serialNumber)
{
	this->coolingTipe = coolingTipe;
	this->appointment = appointment;
}
