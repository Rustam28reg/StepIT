#pragma once
#include <string>
#include <iostream>

using namespace std;

struct boiler
{
	string make{}, model{};
	int power{}, volume{}, temperature{};

	boiler();

	boiler(string make, string model, int power, int volume, int temperature);
	
	

};

void print_boiler(boiler* Boiler);