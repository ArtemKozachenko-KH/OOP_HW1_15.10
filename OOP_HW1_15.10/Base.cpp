#include "Base.h"

int Base::people_on_base = 200;
int Base::vehicles_on_base = 20;
double Base::petrol_on_base = 3000;
double Base::goods_on_base = 50;

int Base::GetPeople()
{
    return people_on_base;
}

void Base::SetPeople(int people)
{
    if (people>=0)
    {
        people_on_base = people;
        return;
    }
    cout << "\n\t !!!!!Number of people can't be less than 0!!!!!";
}

int Base::GetVehicles()
{
    return vehicles_on_base;
}

void Base::SetVehicles(int vehicles)
{
    if (vehicles>=0)
    {
        vehicles_on_base = vehicles;
        return;
    }

    cout << "\n\t !!!!!Number of vehicles can't be less than 0!!!!!";
}

double Base::GetPetrol()
{
    return petrol_on_base;
}

void Base::SetPetrol(double petrol)
{
    if (petrol >= 0)
    {
        petrol_on_base=petrol;
        return;
    }

    cout << "\n\t !!!!!Number of petrol can't be less than 0!!!!!";
}

double Base::GetGoods()
{
    return goods_on_base;
}

void Base::SetGoods(double goods)
{
    if (goods >= 0)
    {
        goods_on_base=goods;
        return;
    }

    cout << "\n\t !!!!!Number of goods can't be less than 0!!!!!";
}

void Base::ShowBase()
{
    cout << "\n\t|-----Base-----|"
        << "\n\t People: " << people_on_base
        << "\n\t Vehicles: " << vehicles_on_base
        << "\n\t Petrol: " << petrol_on_base << "L"
        << "\n\t Goods: " << goods_on_base <<"T" << endl;

}
