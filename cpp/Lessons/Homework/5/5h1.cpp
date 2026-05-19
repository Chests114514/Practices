// Chapter 5 Homework 1

#include <iostream>

int main() {
        using namespace std;

        int integer1;
        int integer2;
        int sum = 0;

        cout << "Enter the first integer: ";
        cin >> integer1;
        cout << "Enter the second integer: ";
        cin >> integer2;

        for (int i = integer1; i != integer2; i++) {
                sum = sum + i;
        }
        sum = sum + integer2;
        cout << "Sum of all of the numbers between " << integer1 << " and " << integer2
        << " is " << sum;
        return 0;
}