#include "computerCase.h"
using namespace std;


computerCase::computerCase(string make, string model, string setialNumber, motherBoard mother_Board, psu p_s_u) : component(make, model, serialNumber)
{
	this->_motherBoard = mother_Board;
	this->_psu = p_s_u;
}
