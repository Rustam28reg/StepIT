#include <iostream>
#include <string>
#include "component.h"
using namespace std;

struct cooler : public component
{
public:
	string coolingTipe; // ��� ���������� 
	string appointment; // ���������� 

	cooler() = default;
	cooler(string coolingTipe, string appointment);

}; 
