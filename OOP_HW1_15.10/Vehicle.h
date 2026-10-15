#pragma once
#include <iostream>
using namespace std;
class Vehicle
{
protected:
	double petrol;
	double maxPetrol;
public:
	Vehicle(double petrol_amount, double tank_volume);
	double GetTankVolume();
	double GetPetrolAmount();
	virtual void Arrive()=0;
	virtual bool Leave()=0;
};


