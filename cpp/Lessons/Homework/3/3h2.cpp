// Chapter 3 Homework 2

#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	cout << "BMI Calculator" << endl;

	int inputFoot;
	double inputInch;
	double inputPound;
	double outputInch;
	double outputBmi;
	double calcMeter;
	double calcMeterPow;
	double calcKg;
	const int convFootInch = 12;
	const double convInchMeter = 0.0254;
	const double convPoundKg = 0.4536;

	cout << "Please input your height(foot <space> inch): ";
	cin >> inputFoot >> inputPound;
	cout << "Please input your weight(pound): ";

	outputInch = inputFoot * convFootInch + inputInch;
	calcMeter = outputInch * convInchMeter;
	calcKg = inputPound * convPoundKg;
	calcMeterPow = pow(calcMeter, 2);
	outputBmi = calcKg / calcMeterPow;

	cout << "Your height: " << outputInch << " inch(es)." << endl;
	cout << "Your BMI: " << outputBmi << endl;
	return 0;
}
