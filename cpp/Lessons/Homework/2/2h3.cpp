// Chapter 2 Homework 3

#include <iostream>

void one();
void two();

using namespace std;

int main()
{
	one();
	one();
	two();
	two();
	return 0;
}

void one()
{
	cout << "Three blind mice" << endl;
}

void two()
{
	cout << "See how they run" << endl;
}
