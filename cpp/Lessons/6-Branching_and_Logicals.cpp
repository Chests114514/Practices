#include <iostream>     // 6.1

int ifelse();
int ifelseif();
int _or();
int _and();

int main() {
        using std::cin;         // using declarations
        using std::cout;
        // 6.1 if.cpp -- using the if statement
        cout << "6.1" << std::endl;

        char ch;
        int spaces = 0;
        int total = 0;
        cin.get(ch);
        while (ch != '.')       // quit at the end of sentence
        {
                if (ch == ' ')  // check if ch is a space
                        ++spaces;
                ++total;        // done every time
                cin.get(ch);
        }
        cout << spaces << " spaces, " << total;
        cout << " characters total in sentence\n";
        ifelse();
        return 0;
}

int ifelse() {
        // 6.2 ifelse.cpp -- using the if else statement
        std::cout << "6.2" << std::endl;

        char ch;

        std::cout << "Type, and I shall repeat.\n";
        std::cin.get(ch);
        while (ch != '.')
        {
                if (ch == '\n')
                        std::cout << ch;        // done if newline
                else
                        std::cout << ++ch;      // done otherwise
                std::cin.get(ch);
        }
// try ch + 1 instead of ++ch for interesting effect
        std::cout << "\nPlease excuse the slight confusion.\n";
                //      std::cin.get()
                //      std::cin.get(ch);
        ifelseif();
        return 0;
}

// 6.3 ifelseif.cpp -- using the if else if else
const int Fave = 27;
int ifelseif() {
        using namespace std;
        
        cout << "6.3" << endl;

        int n;

        cout << "Enter a number in the range 1-100 to find ";
        cout << "my favourite number: ";
        do
        {
                cin >> n;
                if (n < Fave)
                        cout << "Too low -- guess again: ";
                else if (n > Fave)
                        cout << "Too high -- guess again: ";
                else
                        cout << Fave << " is right!\n";
        } while (n != Fave);
        _or();
        return 0;
}

int _or() {
        using namespace std;
        // 6.4 or.cpp -- using the logical OR operator
        cout << "6.4" << endl;

        cout << "This program may reformat your hard disk\n"
                "and destroy all your data.\n"
                "Do you wish to continue? <y/n> ";
        char ch;
        cin >> ch;
        if (ch == 'y' || ch == 'Y')                     // y or Y
                cout << "You were warned!\a\a\n";
        else if (ch == 'n' || ch == 'N')                // n or N
                cout << "A wise choice ... bye\n";
        else
                cout << "That wasn't a y or n! Apparently you "
                        "can't follow\ninstructions, so "
                        "I'll trash your disk anyway.\a\a\a\n";
        _and();
        return 0;
}

// 6.5 and.cpp -- using the logical AND operator
const int ArSize = 6;
int _and() {
        using namespace std;
        cout << "6.5" << endl;

        float naaq[ArSize];
        cout << "Enter the NAAQs (New Age Awareness Quotients) "
                "of\nyour neighbours. Program terminates "
                "when you make\n" << ArSize << " entries "
                "or enter a negative value.\n";

        int i = 0;
        float temp;
        cout << "First value: ";
        cin >> temp;
        while (i < ArSize && temp >= 0) // 2 quitting criteria
        {
                naaq[i] = temp;
                ++i;
                if (i < ArSize)         // room left in array
                {
                        cout << "Next value: ";
                        cin >> temp;    // so get next value
                }
        }
        if (i == 0)
                cout << "No data--bye\n";
        else
        {
                cout << "Enter your NAAQ: ";
                float you;
                cin >> you;
                int count = 0;
                for (int j = 0; j < i; j++)
                        if (naaq[j] > you)
                                ++count;
                cout << count;
                cout << " of your neighbours have greater awareness of\n"
                        "the New Age than you do.\n";
        }
        return 0;
}