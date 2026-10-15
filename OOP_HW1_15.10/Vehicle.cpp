#include "Vehicle.h"

Vehicle::Vehicle(double petrol_amount, double tank_volume)
{
	if (petrol_amount >= 0 && tank_volume >= 50 && petrol_amount<=tank_volume)
	{
		petrol = petrol_amount;
		maxPetrol = tank_volume;
		return;
	}
	cout << "\n\t !!!!!Number of petrol can't be less than 0 and number of MaxPetrol can't be less than 50!!!!!";

}

double Vehicle::GetTankVolume()
{
	return maxPetrol;
}

double Vehicle::GetPetrolAmount()
{
	return petrol;
}

