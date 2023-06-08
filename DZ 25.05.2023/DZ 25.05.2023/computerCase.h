#include <iostream>
#include <string>
#include "motherBoard.h"
#include "psu.h";
using namespace std;

struct computerCase : public component
{
private:
motherBoard _motherBoard{};
psu _psu{};

public:

	computerCase() = default;
	computerCase(string make, string model, string setialNumber, motherBoard mother_Board, psu p_s_u);

};

