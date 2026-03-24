// Chapter 3 Homework 4

#include <iostream>

int main()
{
	using namespace std;
	long long inputSecond;
	long calcSecondMinute;
	long calcMinuteHour;
	long calcHourDay;
	int restSecond;
	int restMinute;
	int restHour;

	cout << "Enter the number of seconds: ";
	cin >> inputSecond;

	calcSecondMinute = inputSecond / 60;
	restSecond = inputSecond % 60;
	calcMinuteHour = calcSecondMinute / 60;
	restMinute = calcSecondMinute % 60;
	calcHourDay = calcMinuteHour / 24;
	restHour = calcMinuteHour % 24;

	cout << inputSecond << " seconds = " << calcHourDay << " days, " << restHour << " hours, " << restMinute << " minutes, " << restSecond << " seconds" << endl;
	return 0;
}
