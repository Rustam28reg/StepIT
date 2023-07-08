#pragma once
#include "component.h"

struct bios : public component
{
	uint16_t memory_value{};

	bios();
	bios(string make, string model, string setialNumber, uint16_t memory_value);

};