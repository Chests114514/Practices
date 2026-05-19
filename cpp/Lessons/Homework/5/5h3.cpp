// Chapter 5 Homework 3

#include <iostream>

int main() {
        using namespace std;

        int num;
        int count = 0;

        cout << "Enter numbers; enter '0' to quit: ";
        cin >> num;
        while (num != 0) {
                count = count + num;
                cin >> num;
        }
        cout << "Total: " << count;
        return 0;
}