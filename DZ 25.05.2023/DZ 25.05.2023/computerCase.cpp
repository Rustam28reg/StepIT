#include <iostream>
#include <string>
#include "component.h"
#include "motherBoard.h"
#include "psu.h";
#include "computerCase.h"
using namespace std;


computerCase::computerCase() = default;
computerCase::computerCase(motherBoard mother_Board, psu p_s_u) : component(make, model, serialNumber)
{
	this->_motherBoard = mother_Board;
	this->_psu = p_s_u;
}
