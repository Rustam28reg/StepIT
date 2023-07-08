#include "cpu.h"


cpu ::cpu(string make, string model, string setialNumber, uint16_t cores, uint16_t frequency, string socketTipe) : component(make, model, serialNumber)
{
	this->cores = cores;
	this->frequency = frequency;
	this->socketTipe = socketTipe;
}
