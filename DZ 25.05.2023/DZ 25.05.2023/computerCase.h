#include <iostream>
#include <string>
#include "component.h"
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
	computerCase(motherBoard mother_Board, psu p_s_u);

};

