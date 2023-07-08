#include "motherBoard.h"

	motherBoard::motherBoard() = default;

	motherBoard::motherBoard(string make, string model, string setialNumber, cpu* _cpu, bios _bios) : component(make,model,serialNumber)
	{
		this->Bios = _bios;
		this->processor = _cpu;
	}



