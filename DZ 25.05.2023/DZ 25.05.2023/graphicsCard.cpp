#include "graphicsCard.h"


graphicsCard::graphicsCard(string make, string model, string setialNumber, uint16_t memory) : component(make, model, serialNumber)
{
	this->memory = memory;
}