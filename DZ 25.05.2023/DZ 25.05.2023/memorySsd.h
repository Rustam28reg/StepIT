#include <iostream>
#include "component.h"
using namespace std;

struct memorySsd : public component
{
public:
	string memory;

	memorySsd() = default;
	memorySsd(string memory);
};
