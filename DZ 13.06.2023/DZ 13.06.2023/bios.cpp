#include "bios.h"

bios :: bios() = default;
bios::bios(string make, string model, string setialNumber, uint16_t memory_value) : component(make, model, serialNumber)
{
	this->memory_value = memory_value;
}