// Chapter 2 Homework 7

#include <iostream>

void converter(int, int);

using namespace std;

int main()
{
	int hours;
	int minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	converter(hours, minutes);
	return 0;
}

void converter(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes << endl;
}
