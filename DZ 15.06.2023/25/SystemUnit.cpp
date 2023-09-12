#include "SystemUnit.h"
#include <iostream>
using namespace std;


systemUnit :: systemUnit(string& _make, string& _model, motherBoard& _motherBoard,
	powerUnit& _powerUnit, storageDevice& _storageDevice, Cooler& _cooler)
{
	this->make = _make;
	this->model = _model;
	this->motherBoardd = new motherBoard(_motherBoard);
	this->powerUnitt = new powerUnit(_powerUnit);
	this->storageDevicee = new storageDevice(_storageDevice);
	this->cooler = new Cooler(_cooler);
}

systemUnit :: systemUnit(const systemUnit& _systemUnit)
{
	this->make = _systemUnit.make;
	this->model = _systemUnit.model;
	this->motherBoardd = new motherBoard(*_systemUnit.motherBoardd);
	this->powerUnitt = new powerUnit(*_systemUnit.powerUnitt);
	this->storageDevicee = new storageDevice(*_systemUnit.storageDevicee);
	this->cooler = new Cooler(*_systemUnit.cooler);
}

string systemUnit :: getMake() const
{
	return this->make;
}

string systemUnit :: getModel() const
{
	return this->model;
}

void systemUnit :: printDataSystemUnit() const
{
	cout
		<< "System unit make: " << this->make << endl
		<< "System unit model: " << this->model << endl;

	this->motherBoardd->printDataMotherBoard();
	this->powerUnitt->printDataPowerUnit();
	this->storageDevicee->printDataStorageDevice();
	this->cooler->printDataCooler();
}