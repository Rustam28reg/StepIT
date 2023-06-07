#include <iostream>
#include "cpu.h"
#include "component.h"
#include "graphicsCard.h"
using namespace std;

graphicsCard::graphicsCard() = default;
graphicsCard::graphicsCard(uint16_t memory) : component(make, model, serialNumber)
{
	this->memory = memory;
}