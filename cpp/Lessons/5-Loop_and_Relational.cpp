// Loop and Relational Expressions

#include <iostream>     // 5.1 5.2 5.3 5.4 5.5 5.6
#include <string>       // 5.6

int num_test();
int express();
int formore();
int bigstep();
int forstr1();

int main() 
{
        using namespace std;
        // 5.1 forloop.cpp -- introducing the for loop
        cout << "5.1" << endl;

        int i;  // create a counter
//      initalize; test ; update
        for (i = 0; i < 5; i++) {       // "{}" is not included in the book but recommended
                cout << "C++ knows loops.\n";
        }
        cout << "C++ knows when to stop.\n";
        num_test();
        return 0;
}

int num_test()
{
        using namespace std;
        // 5.2 num_test.cpp -- use numeric test in for loop
        cout << "5.2" << endl;

        cout << "Enter the starting countdown value: ";
        int limit;
        cin >> limit;
        int i;
        for (i = limit; i; i--) {       // quits when i is 0
                cout << "i = " << i << "\n";
        }
        cout << "Done now that i = " << i << "\n";
        express();
        return 0;
}

int express()
{
        using namespace std;
        // 5.3 express.cpp -- values of expressions
        cout << "5.3" << endl;

        int x;

        cout << "The expression x = 100 has the value ";
        cout << (x = 100) << endl;
        cout << "Now x = " << x << endl;
        cout << "The expression x < 3 has the value ";
        cout << (x < 3) << endl;
        cout << "The expression x > 3 has the value ";
        cout << (x > 3) << endl;
        cout.setf(ios_base::boolalpha);         // a newer c++ feature
        cout << "The expression x < 3 has the value ";
        cout << (x < 3) << endl;
        cout << "The expression x > 3 has the value ";
        cout << (x > 3) endl;
        formore();
        return 0;
}

int formore()
{
        using namespace std;
        // 5.4 formore.cpp -- more looping with for
        cout << "5.4" << endl;

        const int ArSize = 16;
        long long factorials[ArSize];
        factorials[1] = factorials[0] = 1LL;
        for (int i = 2; i < ArSize; i++) {
                factorials[i] = i * factorials[i-1];
        }
        for (int i = 0; i < ArSize; i++) {
                cout << i << "! = " << factorials[i] << endl;
        }
        bigstep();
        return 0;
}

int bigstep()
{
        using std::cout;        // a using declaration
        using std::cin;
        using std::endl;
        // 5.5 bigstep.cpp -- count as directed
        cout << "5.5" << endl;

        cout << "Enter an integer: ";
        int by;
        cin >> by;
        cout << "Counting by " << by << "s:\n";
        for (int i = 0; i < 100; i = i + by) {
                cout << i << endl;
        }
        forstr1();
        return 0;
}

int forstr1()
{
        using namespace std;
        // 5.6 forstr1.cpp -- using for with a string
        cout << "5.6" << endl;

        cout << "Enter a word: ";
        string word;
        cin >> word;

        // display letters in reverse order
        for (int i = word.size() - 1; i >= 0; i--) {
                cout << word[i];
        }
        cout << "\nBye.\n";
        return 0;
}