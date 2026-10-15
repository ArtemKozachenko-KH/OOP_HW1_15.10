#pragma once
#include <iostream>

using namespace std;
class Base
{
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;
public:
	static int GetPeople();
	static void SetPeople(int people);
	static int GetVehicles();
	static void SetVehicles(int vehicles);
	static double GetPetrol();
	static void SetPetrol(double petrol);
	static double GetGoods();
	static void SetGoods(double goods);
	static void ShowBase();

};

