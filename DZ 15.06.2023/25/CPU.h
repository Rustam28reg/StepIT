#include <string>
#include <iostream>
using namespace std;

class CPU
{
private:
	string make{};
	string model{};
	uint16_t* frequency = new uint16_t{};
	string performance{};
	string socket{};
public:
	CPU(string& _make, string& _model, uint16_t& _frequency, string& _performance, string& _socket);

	CPU(const CPU& _CPU);

	string getMake() const;
	string getModel() const;
	uint16_t getFrequency() const;
	string getPerformance() const;
	string getSocket() const;

	void printDataCPU() const;
};