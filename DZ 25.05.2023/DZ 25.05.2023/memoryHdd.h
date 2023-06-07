#include <iostream>
#include "component.h"
using namespace std;

struct memoryHdd : public component
{
public:
	string memory;

	memoryHdd() = default;
	memoryHdd(string memory);
};