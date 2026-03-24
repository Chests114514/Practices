// Chapter 2 Homework 5

#include <iostream>

int main()
{
	using namespace std;
	double cels;
	double fahr;
	cout << "Please enter a celsius value: ";
	cin >> cels;
	fahr = 1.8 * cels + 32;
	cout << cels << " degrees Celcius is " << fahr << " degrees Farenheit" << endl;
	return 0;
}
