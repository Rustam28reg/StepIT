#include <iostream>
#include "cpu.h"
#include "component.h"
#include <string>
using namespace std;

cpu :: cpu() = default;
cpu :: cpu(uint16_t cores, uint16_t frequency, string socketTipe = "") : component(make, model, serialNumber)
{
	this->cores = cores;
	this->frequency = frequency;
	this->socketTipe = socketTipe;
}
