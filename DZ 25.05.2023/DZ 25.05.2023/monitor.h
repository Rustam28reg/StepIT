#include <iostream>
#include <string>
#include "component.h"
using namespace std;

struct monitor : public component
{
public:
	string matrix;
	uint16_t diagonal;
	string screenResolution; // разрешение экрана
	uint16_t frequency; // частота обновления 

	monitor() = default;
	monitor(string matrix, uint16_t diagonal, string screenResolution, uint16_t frequency);
};
