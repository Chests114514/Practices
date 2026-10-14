#include <iostream>     // 6.1

int ifelse();
int ifelseif();

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
        return 0;
}