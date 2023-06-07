#include <iostream>
#include <string>
#include "component.h"
#include "motherBoard.h"
#include "monitor.h"
#include "psu.h";
#include "computerCase.h";
using namespace std;

class computer : public component
{
private:
	monitor _monitor{};
	computerCase _computerCase{};
	string keyBoard{};
	string mouse{};
public:
	computer() = default;
	computer(monitor _monitor_, computerCase computer_case, string _keyboard, string _mouse);
	
};