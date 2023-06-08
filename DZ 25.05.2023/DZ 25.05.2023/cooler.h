#include <iostream>
#include <string>
#include "component.h"
using namespace std;

struct cooler : public component
{
public:
	string coolingTipe; // тип охлаждения 
	string appointment; // назначение 

	cooler() = default;
	cooler(string make, string model, string setialNumber, string coolingTipe, string appointment);

}; 
