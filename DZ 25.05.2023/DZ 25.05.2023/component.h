using namespace std;
#include <string>

struct component {
protected:
	string make;
	string model;
	string serialNumber;

	component() = default;
	component(string make, string model, string serialNumber);

};