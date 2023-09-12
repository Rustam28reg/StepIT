#include "RAM.h"
#include "CPU.h"
#include "GraphicCard.h"
#include <string>
#include <iostream>
using namespace std;

class motherBoard
{
private:
	string make;
	string model;
public:
	RAM* raM{};
	CPU* cpU{};
	graphicCard* graphicCarD{};

	motherBoard(string& _make, string& _model, RAM& _RAM, CPU& _CPU, graphicCard& _graphicCard);

	motherBoard(const motherBoard& _motherBoard);

	string getMake() const;
	string getModel() const;

	void printDataMotherBoard() const;
};