#pragma once
#include <iostream>
#include <string>
using namespace std;

struct component {
protected:
	string make{};
	string model{};
	string serialNumber{};

	component() = default;
	component(string make, string model, string serialNumber);

};