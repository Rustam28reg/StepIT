#include "motherBoard.h"


motherBoard ::motherBoard(string make, string model, string setialNumber, cpu _cpu, ram _ram, graphicsCard _graphicscard, memoryHdd _memoryHdd, memorySsd memorySdd, cooler _cooler) : component(make, model, serialNumber)
{
	this->_cpu = _cpu;
	this->_ram = _ram;
	this->_graphicsCard = _graphicsCard;
	this->_memoryHdd = _memoryHdd;
	this->_memorySdd = _memorySdd;
	this->_cooler = _cooler;
}
