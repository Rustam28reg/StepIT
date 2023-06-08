#include <iostream>
#include <string>
#include "component.h"
using namespace std;

struct ram : public component
{
public:
	string memory;

	ram() = default;
	ram(string make, string model, string setialNumber, string memory);
};
