#pragma once
#include <iostream>
#include "Vehicle.h"
#include "Base.h"
using namespace std;


class Truck : public Vehicle
{
	double load;
	double maxLoad;
public:
	Truck(double ld, double maxLd, double petrol_amount, double tank_volume);
	void Arrive();
	bool Leave();
	double GetCurrentLoad();
	double GetMaxLoad();
};


