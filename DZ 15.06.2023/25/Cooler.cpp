#include "Cooler.h"

Cooler :: Cooler(string& _make, string& _model, string& _purpose, string& _socket, string& _connectorType, string& _material, 
	uint16_t& _numberOfHeatPipes, uint16_t& _numberOfFans, uint16_t& _rotationalSpeed, uint16_t& _noiseLevel, uint16_t& _weight)
{
	this->make = _make;
	this->model = _model;
	this->purpose = _purpose;
	this->socket = _socket;
	this->connectorType = _connectorType;
	this->material = _material;
	*this->numberOfHeatPipes = _numberOfHeatPipes;
	*this->numberOfFans = _numberOfFans;
	*this->rotationalSpeed = _rotationalSpeed;
	*this->noiseLevel = _noiseLevel;
	*this->weight = _weight;
}

Cooler :: Cooler(const Cooler& _Cooler)
{
	this->make = _Cooler.make;
	this->model = _Cooler.model;
	this->purpose = _Cooler.purpose;
	this->socket = _Cooler.socket;
	this->connectorType = _Cooler.connectorType;
	this->material = _Cooler.material;
	this->numberOfHeatPipes = new uint16_t(*_Cooler.numberOfHeatPipes);
	this->numberOfFans = new uint16_t(*_Cooler.numberOfFans);
	this->rotationalSpeed = new uint16_t(*_Cooler.rotationalSpeed);
	this->noiseLevel = new uint16_t(*_Cooler.noiseLevel);
	this->weight = new uint16_t(*_Cooler.weight);
}


string Cooler :: getMake() const
{
	return this->make;
}

string Cooler :: getModel() const
{
	return this->model;
}

string Cooler :: getPurpose() const
{
	return this->purpose;
}

string Cooler :: getSocket() const
{
	return this->socket;
}

string Cooler :: getConnectorType() const
{
	return this->connectorType;
}

string Cooler :: getMaterial() const
{
	return this->material;
}

uint16_t Cooler :: getNumberOfHeatPipes() const
{
	return *this->numberOfHeatPipes;
}

uint16_t Cooler :: getNumberOfFans() const
{
	return *this->numberOfFans;
}

uint16_t Cooler :: getRotationalSpeed() const
{
	return *this->rotationalSpeed;
}

uint16_t Cooler :: getNoiseLevel() const
{
	return *this->noiseLevel;
}

uint16_t Cooler :: getWeight() const
{
	return *this->weight;
}

void Cooler :: printDataCooler() const
{
	cout
		<< "Cooler make: " << this->make << endl
		<< "cooler model: " << this->model << endl
		<< "Cooler purpose: " << this->purpose << endl
		<< "Cooler socket: " << this->socket << endl
		<< "Cooler connectortype: " << this->connectorType << endl
		<< "Cooler material: " << this->material << endl
		<< "Cooler number of heat pipes: " << *this->numberOfHeatPipes << endl
		<< "Cooler numbers of fans: " << *this->numberOfFans << endl
		<< "Cooler rotational speed: " << *this->rotationalSpeed << endl
		<< "Cooler noise level: " << *this->noiseLevel << endl
		<< "Cooler weight: " << *this->weight << endl;
}