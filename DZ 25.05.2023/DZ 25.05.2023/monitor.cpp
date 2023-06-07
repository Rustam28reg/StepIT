#include <iostream>
#include <string>
#include "monitor.h"
#include "component.h"
using namespace std;

monitor::monitor() = default;
monitor::monitor(string matrix, uint16_t diagonal, string screenResolution, uint16_t frequency) : component(make, model, serialNumber)
{
	this->matrix = matrix;
	this->diagonal = diagonal;
	this->screenResolution = screenResolution;
	this->frequency = frequency;
}
