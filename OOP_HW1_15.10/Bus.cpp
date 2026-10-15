#include "Bus.h"

Bus::Bus(int ppl, int maxPpl, double petrol_amount, double tank_volume) : Vehicle(petrol_amount,tank_volume)
{
	if (ppl >= 0 && maxPpl >= 0 && maxPpl>=ppl)
	{
		people=ppl;
		maxPeople = maxPpl;
		return;
	}
	cout << "\n\t !!!!!Number of people and number maxPeople can't be less than 0 and number of people can't be more than number of maxPeople!!!!!";

}

void Bus::Arrive()
{
	cout << "\n\t|----Bus arrive......-----|";
	Base::SetPeople(Base::GetPeople() + GetPeopleCount() + 1);
	cout << "\n\t|+" << GetPeopleCount() + 1 << " people on the base|";
	people = 0;
	
	Base::SetVehicles(Base::GetVehicles() + 1);
	cout << "\n\t|+" << 1 << " vehicles on the base|";
}

bool Bus::Leave()
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

	if (Base::GetPeople() == 0)
	{
		cout << "\n\t !!!!!No passangers!!!!!";
	}
	else
	{
		counter = 0;
		while (Base::GetPeople() != 0 && counter < maxPeople)
		{
			counter++;
			Base::SetPeople(Base::GetPeople() - 1);
		}
		cout << "\n\t|-" << counter << " person on the base|";
	}
	people = counter;


	counter = petrol;
	Base::SetPetrol(Base::GetPetrol() - (maxPetrol - petrol));
	petrol = maxPetrol;
	cout << "\n\t|-" << maxPetrol - counter << " petrol on the base|";

	cout << "\n\t|----Bus leave......-----|";
	return true;
}

int Bus::GetPeopleCount()
{
	return people;
}

int Bus::GetMaxPeople()
{
	return maxPeople;
}
