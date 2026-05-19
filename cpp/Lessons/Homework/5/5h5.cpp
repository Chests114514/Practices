// Chapter 5 Homework 5

#include <iostream>
#include <string>

int main() {
        using namespace std;

        int ArSize = 12;
        int sales[12];
        int sell = 0;
        string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        for (int i = 0; i < ArSize; i++) {
                cout << "Enter sales in " << month[i] << " month: ";
                cin >> sales[i];
        }
        for (int i = 0; i < ArSize; i++) {
                sell = sell + sales[i];
        }
        cout << "Total: " << sell << endl;
        return 0;
}