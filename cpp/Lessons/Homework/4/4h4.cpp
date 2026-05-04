// Chapter 4 Homework 4

#include <iostream>
#include <string>

int main() {
        using namespace std;
        string first;
        string last;

        cout << "Enter your first name: ";
        cin >> first;
        cout << "Enter your last name: ";
        cin >> last;

        last = last + ", " + first;

        cout << "Here's your information in a single string: " << last << endl;
        return 0;
}