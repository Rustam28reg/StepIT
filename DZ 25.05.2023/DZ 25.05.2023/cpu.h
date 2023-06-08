#include <iostream>
#include "component.h"
using namespace std;

struct cpu : public component
{
private:
	uint16_t frequency; // тактовая частота 
	uint16_t cores;
	string socketTipe;

public:
	cpu() = default;
	cpu(string make, string model, string setialNumber, uint16_t cores, uint16_t frequency, string socketTipe = "");
};
