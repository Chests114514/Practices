// Chapter 4 Homework 10

#include <iostream>
#include <array>

int main() {
        using namespace std;

        array<double, 3> score = {};
        int size = 3;

        for (int i = 0; i < size; i++) {
                cout << i + 1 << ". Run of 40 meter score: ";
                cin >> score[i];
        }

        cout << "Runs: " << size << endl;
        for (int i = 0; i < size; i++) {
                cout << i + 1 << ". Run score: " << score[i] << endl;
        }
        return 0;
}