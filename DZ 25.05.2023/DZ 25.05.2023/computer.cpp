#include <iostream>
#include <string>
#include "component.h"
#include "motherBoard.h"
#include "monitor.h"
#include "psu.h";
#include "computerCase.h";
#include "computer.h";
using namespace std;

computer::computer() = default;
computer::computer(monitor _monitor_, computerCase computer_case, string _keyboard, string _mouse) : component(make, model, serialNumber)
{
	this->_monitor = _monitor_;
	this->_computerCase = computer_case;
	this->keyBoard = _keyboard;
	this->mouse = _mouse;
}
