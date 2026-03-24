// Chapter 3 Homework 5

#include <iostream>

int main()
{
	using namespace std;

	long long totalWorld;
	long long totalUS;
	float output;

	cout << "Enter the world's poputaion: ";
	cin >> totalWorld;
	cout << "Enter the population of the US: ";
	cin >> totalUS;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	output = (float)totalUS / totalWorld * 100;

	cout << "The population of the US is " << output << "% of the world population." << endl;
	return 0;
}
