#include "boiler.h"
#include <string>

using namespace std;

boiler::boiler() = default;

boiler::boiler(string make, string model, int power, int volume, int temperature)
{
	this->make = make;
	this->model = model;
	this->power = power;
	this->volume = volume;
	this->temperature = temperature;
}
void print_boiler(boiler* Boiler)
{
	cout << "Make - " << Boiler->make << endl
		 << "Model - " << Boiler->model << endl
		 << "Power - " << Boiler->power << endl
		 << "Volume - " << Boiler->volume << endl
		 << "Temperature - " << Boiler->temperature << endl;
}