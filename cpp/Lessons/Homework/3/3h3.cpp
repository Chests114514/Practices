// Chapter 3 Homework 3

#include <iostream>

int main()
{
	using namespace std;
	int inputDegrees;
	int inputMinutes;
	int inputSeconds;
	float calcSecondsMinutes;
	float calcTotalMinutes;
	float calcMinutesDegrees;
	float output;
	const int conv = 60;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> inputDegrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> inputMinutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> inputSeconds;

	calcSecondsMinutes = inputSeconds / conv;
	calcTotalMinutes = calcSecondsMinutes + inputMinutes;
	calcMinutesDegrees = calcTotalMinutes / conv;
	output = inputDegrees + calcMinutesDegrees;

	cout << inputDegrees << " degrees, " << inputMinutes << " minutes, " << inputSeconds << " seconds = ";
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << output << " degrees." << endl;
	return 0;
}
