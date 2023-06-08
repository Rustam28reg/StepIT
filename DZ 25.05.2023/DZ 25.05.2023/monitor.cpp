#include "monitor.h"


monitor::monitor(string make, string model, string setialNumber, string matrix, uint16_t diagonal, string screenResolution, uint16_t frequency) : component(make, model, serialNumber)
{
	this->matrix = matrix;
	this->diagonal = diagonal;
	this->screenResolution = screenResolution;
	this->frequency = frequency;
}
