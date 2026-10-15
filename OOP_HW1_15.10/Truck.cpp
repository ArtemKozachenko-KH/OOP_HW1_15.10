#include "Truck.h"

Truck::Truck(double ld, double maxLd, double petrol_amount, double tank_volume) : Vehicle(petrol_amount, tank_volume)
{
	if (ld >= 0 && maxLd >= 1 && ld <= maxLd)
	{
		load = ld;
		maxLoad = maxLd;
		return;
	}
	cout << "\n\t !!!!!Number of load can't be less than 0 and number of maxLoad can't be less than 1 and less than load!!!!!";
}

void Truck::Arrive()
{
	cout << "\n\t|----Truck arrive......-----|";

	Base::SetGoods(Base::GetGoods() + GetCurrentLoad());
	cout << "\n\t|+" << GetCurrentLoad() << "T goods on the base|";
	load = 0;

	Base::SetPeople(Base::GetPeople() + 1);
	cout << "\n\t|+" << 1 << " person on the base|";

	Base::SetVehicles(Base::GetVehicles() + 1);
	cout << "\n\t|+" << 1 << " vehicle on the base|";

}

bool Truck::Leave()
{
	double counter = 0;
	if (Base::GetPeople() <= 0 || Base::GetVehicles() <= 0 || (petrol < maxPetrol && Base::GetPetrol() < (maxPetrol - petrol)))
	{
		return false;
	}

	Base::SetPeople(Base::GetPeople() - 1);
	cout << "\n\t|-1 person on the base|";

	Base::SetVehicles(Base::GetVehicles() - 1);
	cout << "\n\t|-1 vehicle on the base|";

	if (Base::GetGoods() == 0)
	{
		cout << "\n\t !!!!!No goods!!!!!";
	}

	if (Base::GetGoods() >= maxLoad)
	{
		load = maxLoad;
		cout << "\n\t|-" << maxLoad << " goods on the base|";
	}
	else
	{
		load = Base::GetGoods();
	}
	Base::SetGoods(Base::GetGoods() - load);


	counter = petrol;
	Base::SetPetrol(Base::GetPetrol() - (maxPetrol - petrol));
	petrol = maxPetrol;
	cout << "\n\t|-" << maxPetrol - counter << " petrol on the base|";
	cout << "\n\t|----Truck leave......-----|";
	return true;
}

double Truck::GetCurrentLoad()
{
	return load;
}

double Truck::GetMaxLoad()
{
	return maxLoad;
}
