// Chapter 3 Homework 7

#include <iostream>

int main()
{
	using namespace std;
	double fuelEu;
	double fuelUs;

	cout << "Your fuel cost pr. 100km: ";
	cin >> fuelEu;
	fuelUs = fuelEu * 0.264;
	cout << "Fuel cost pr. 62.14miles: " << fuelUs << endl;
	return 0;
}
