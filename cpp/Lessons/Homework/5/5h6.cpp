// Chapter 5 Homework 6

#include <iostream>
#include <string>

int main() {
        using namespace std;

        int ArSizex = 12;
        int ArSizey = 3;
        int sell[ArSizex] [ArSizey];
        string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

        for (int i = 0; i < ArSizey; i++) {
                cout << "Year " << i + 1 << endl;
                for (int j; j < ArSizex; j++) {
                        cout << "Sales of " << month[j] << ": ";
                        cin >> sell[j] [i];
                }
        }

        int sales[3];
        for (int i = 0; i < ArSizey; i++) {
                for (int j = 0; j < ArSizex; j++) {
                        sales[i] = sales[i] + sell[j] [i];
                }
        }

        for (int i = 0; i < ArSizey; i++) {
                cout << "Year " << i + 1 << ": " << sales[i];
        }
        
        int total = sales[0] + sales[1] + sales[2];
        cout << "Total: " << total << endl;
        return 0;
}