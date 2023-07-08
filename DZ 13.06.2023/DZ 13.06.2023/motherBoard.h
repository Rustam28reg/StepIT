#pragma once
#include "cpu.h"
#include "bios.h"

struct motherBoard : public component
{
public:
	cpu* processor{}; 
	bios Bios{};

	motherBoard() = default;
	motherBoard(string make, string model, string setialNumber, cpu* _cpu, bios _bios);

};
