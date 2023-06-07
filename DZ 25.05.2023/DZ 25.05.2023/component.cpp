#include <iostream>
#include "component.h"
#include <string>
using namespace std;

component::component() = default;
component::component(string make, string model, string serialNumber) {
	this->make = make;
	this->model = model;
	this->serialNumber = serialNumber;
}
