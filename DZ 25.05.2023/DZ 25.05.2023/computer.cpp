#include "computer.h";
using namespace std;


computer::computer(string make, string model, string setialNumber, monitor _monitor_, computerCase computer_case, string _keyboard, string _mouse) : component(make, model, serialNumber)
{
	this->_monitor = _monitor_;
	this->_computerCase = computer_case;
	this->keyBoard = _keyboard;
	this->mouse = _mouse;
}
