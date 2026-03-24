// Chapter 3 Homework 6

#include <iostream>

int main()
{
	using namespace std;

	float length;
	float petrol;
	float output;

	cout << "Enter the length that the car driven(km): ";
	cin >> length;
	cout << "Enter the petrol used(L): ";
	cin >> petrol;

	output = petrol / length * 100;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Petrol used per 100 km: " << output << endl;
	return 0;
}
