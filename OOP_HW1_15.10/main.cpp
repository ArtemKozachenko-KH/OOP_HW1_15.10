#include <iostream>
#include "Base.h"
#include "Bus.h"
#include "Truck.h"
using namespace std;

int main()
{
	Bus bs(1, 30, 50, 100);
	Truck tr(5, 10, 80, 200);
	Base::ShowBase();

	bs.Arrive();
	cout << endl;
	Base::ShowBase();

	tr.Arrive();
	cout << endl;
	Base::ShowBase();


	bs.Leave();
	cout << endl;
	Base::ShowBase();

	tr.Leave();
	cout << endl;
	Base::ShowBase();
}

