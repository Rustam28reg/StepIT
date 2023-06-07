#include <iostream>
#include "cpu.h"
#include "component.h"
using namespace std;

struct graphicsCard : public component
{
protected:
	cpu gpu;
	uint16_t memory;
public:
	graphicsCard() = default;
	graphicsCard(uint16_t memory);
};
