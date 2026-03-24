// Chapter 3 Homework 1

#include <iostream>

int main()
{
	using namespace std;
	double inch;
	double foot;
	const double conv = 0.0833;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Please input your height(inch):________\b\b\b\b\b\b\b\b";
	cin >> inch;
	foot = inch * conv;
	cout << "Your height in foot(feet): " << foot << " foot(feet)" << endl;
	return 0;
}
