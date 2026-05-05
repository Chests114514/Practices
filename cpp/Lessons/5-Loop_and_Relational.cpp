// Loop and Relational Expressions

#include <iostream>     // 5.1

int main() 
{
        using namespace std;
        // 5.1 forloop.cpp -- introducing the for loop
        cout << "5.1" << endl;

        int i;  // create a counter
//      initalize; test ; update
        for (i = 0; i < 5; i++) {       // "{}" is not included in the book but recommended
                cout << "C++ knows loops.\n";
                cout << "C++ knows when to stop.\n";
        }
        return 0;
}