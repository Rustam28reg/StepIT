#include <iostream>
#include <string>
#include "component.h"
#include "cpu.h"
#include "graphicsCard.h"
#include "memorySsd.h"
#include "memoryHdd.h"
#include "cooler.h"
#include "ram.h"
#include "motherBoard.h"
using namespace std;

motherBoard::motherBoard() = default;
motherBoard ::motherBoard(cpu _cpu, ram _ram, graphicsCard _graphicscard, memoryHdd _memoryHdd, memorySsd memorySdd, cooler _cooler) : component(make, model, serialNumber)
{
	this->_cpu = _cpu;
	this->_ram = _ram;
	this->_graphicsCard = _graphicsCard;
	this->_memoryHdd = _memoryHdd;
	this->_memorySdd = _memorySdd;
	this->_cooler = _cooler;
}
