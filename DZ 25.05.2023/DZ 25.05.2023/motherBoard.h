#include <iostream>
#include <string>
#include "component.h"
#include "cpu.h"
#include "graphicsCard.h"
#include "memorySsd.h"
#include "memoryHdd.h"
#include "cooler.h"
#include "ram.h"

using namespace std;

struct motherBoard : public component
{
public:
	cpu _cpu{};
	ram _ram{};
	graphicsCard _graphicsCard{};
	memoryHdd _memoryHdd{};
	memorySsd _memorySdd{};
	cooler _cooler{};

	motherBoard() = default;
	motherBoard(cpu _cpu, ram _ram, graphicsCard _graphicscard, memoryHdd _memoryHdd, memorySsd memorySdd, cooler _cooler);

};