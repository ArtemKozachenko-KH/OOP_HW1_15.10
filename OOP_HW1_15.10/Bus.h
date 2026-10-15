#pragma once
#include <iostream>
#include "Vehicle.h"
#include "Base.h"
using namespace std;


class Bus : public Vehicle
{
	int people;
	int maxPeople;
public:
	Bus(int ppl,int maxPpl,double petrol_amount, double tank_volume);
	void Arrive();
	bool Leave();
	int GetPeopleCount();
	int GetMaxPeople();
};


