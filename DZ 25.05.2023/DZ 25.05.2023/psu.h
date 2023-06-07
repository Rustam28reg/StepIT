#include <iostream>
#include <string>
#include "component.h"
using namespace std;

struct psu : public component // блок питания
{
public:
	uint16_t power; // Вт
	uint16_t voltage; // 110 или 220

	psu() = default;
	psu(uint16_t power, uint16_t voltage);

}; 