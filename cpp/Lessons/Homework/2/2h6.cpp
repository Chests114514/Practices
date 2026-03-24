// Chapter 2 Homework 6

#include <iostream>

using namespace std;

int converter(double);

int main()
{
	int ly;
	cout << "Enter the number of light years: ";
	cin >> ly;
	cout << ly << " light years = " << converter(ly) << " astronomical units." << endl;
	return 0;
}

int converter(double lyau)
{
	int au = lyau * 63240;
	return au;
}
