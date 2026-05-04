// Chapter 4 Homework 3

#include <iostream>
#include <cstring>

int main() {
        using namespace std;
        char first[20];
        char last[20];

        cout << "Enter your first name: ";
        cin >> first;
        cout << "Enter your last name: ";
        cin >> last;

        strcat(last, ", ");
        strcat(last, first);

        cout << "Here's your information in a single string: " << last << endl;
        return 0;
}