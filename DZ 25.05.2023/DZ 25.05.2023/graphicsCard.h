#include "cpu.h"


struct graphicsCard : public component
{
protected:
	cpu gpu;
	uint16_t memory;
public:
	graphicsCard() = default;
	graphicsCard(string make, string model, string setialNumber, uint16_t memory);
};
