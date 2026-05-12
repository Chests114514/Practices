// Loop and Relational Expressions

#include <iostream>     // 5.1 5.2 5.3 5.4 5.5 5.6 5.7 5.8 5.9 5.10 5.11 5.12 5.13 5.14 5.15 5.16 5.17 5.18 5.19 5.20
#include <string>       // 5.6 5.9 5.12
#include <cstring>      // 5.11
#include <ctime>        // 5.14

int num_test();
int express();
int formore();
int bigstep();
int forstr1();
int plus_one();
int block();
int forstr2();
int equal();
int compstr1();
int compstr2();
int _while();
int waiting();
int dowhile();
int textin1();
int textin2();
int textin3();
int textin4();
int nested();

int main() 
{
        using namespace std;
        // 5.1 forloop.cpp -- introducing the for loop
        cout << "5.1" << endl;

        int i;  // create a counter
//      initalize; test ; update
        for (i = 0; i < 5; i++)
                cout << "C++ knows loops.\n";
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
        for (i = limit; i; i--)         // quits when i is 0
                cout << "i = " << i << "\n";
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
        cout << (x > 3) << endl;
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
        for (int i = 2; i < ArSize; i++)
                factorials[i] = i * factorials[i-1];
        for (int i = 0; i < ArSize; i++)
                cout << i << "! = " << factorials[i] << endl;
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
        for (int i = 0; i < 100; i = i + by)
                cout << i << endl;
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
        for (int i = word.size() - 1; i >= 0; i--)
                cout << word[i];
        cout << "\nBye.\n";
        plus_one();
        return 0;
}

int plus_one()
{
        using std::cout;
        // 5.7 plus_one.cpp -- th increment operator
        cout << "5.7\n";

        int a = 20;
        int b = 20;
        cout << "a   = " << a << ":   b = " << b << "\n";
        cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
        cout << "a   = " << a << ":   b = " << b << "\n";
        block();
        return 0;
}

int block()
{
        using namespace std;
        // 5.8 block.cpp -- use a block statement
        cout << "5.8" << endl;

        cout << "The Amazing Accounto will sum and average ";
        cout << "five numbers for you.\n";
        cout << "Please enter five values:\n";
        double number;
        double sum = 0.0;
        for (int i; i <= 5; i++)
        {                                       // block starts here
                cout << "Value " << i << ": ";
                cin >> number;
                sum += number;
        }                                       // block ends here
        cout << "Five exquiste choices indeed! ";
        cout << "They sum to " << sum << endl;
        cout << "and average to " << sum / 5 << ".\n";
        cout << "The Amazing Accounto bids you adieu!\n";
        forstr2();
        return 0;
}

int forstr2()
{
        using namespace std;
        // 5.9 forstr2.cpp -- reversing an array
        cout << "5.9" << endl;

        cout << "Enter a word: ";
        string word;
        cin >> word;

        // physically modify string object
        char temp;
        int i, j;
        for (j = 0, i = word.size() - 1; j < i; --i, ++j)
        {                               // start block
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
        }                               // end block
        cout << word << "\nDone\n";
        equal();
        return 0;
}

int equal()
{
        using namespace std;
        // 5.10 equal.cpp -- equality vs assignement
        cout << "5.10" << endl;

        int quizscores[10] = 
                { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
        
        cout << "Doing it right:\n";
        int i;
        for (i = 0; quizscores[i] == 20; i++)
                cout << "quiz " << i << " is a 20\n";
// Warning: you may prefer reading about this program
// to actually running it.
/* I'd prefer make it not to run
        cout << "Doing to dangerously wrong:\n";
        for (i = 0; quizscores[i] = 20; i++)
                cout << "quiz " << i << " is a 20\n";
*/
        compstr1();
        return 0;
}

int compstr1()
{
        using namespace std;
        // 5.11 compstr1.cpp -- comparing strings using arrays
        cout << "5.11" << endl;

        char word[5] = "?ate";
        for (char ch = 'a'; strcmp(word, "mate"); ch++)
        {
                cout << word << endl;
                word[0] = ch;
        }
        cout << "After loop ends, word is " << word << endl;
        compstr2();
        return 0;
}

int compstr2()
{
        using namespace std;
        // 5.12 compstr2.cpp -- comparing strings using arrays
        cout << "5.12" << endl;

        string word = "?ate";
        for (char ch = 'a'; word != "mate"; ch++)
        {
                cout << word << endl;
                word[0] = ch;
        }
        cout << "After loop ends, word is " << word << endl;
        _while();
        return 0;
}

// 5.13 while.cpp -- introducing the while loop
const int ArSize = 20;
int _while()
{
        using namespace std;
        cout << "5.13" << endl;

        char name[ArSize];
        cout << "Your first name, please: ";
        cin >> name;
        cout << "Here is your name, verticalized and ASCIIized:\n";
        int i = 0;                      // start at beginning of string
        while (name[i] != '\0')         // process to end of string
        {
                cout << name[i] << ": " << int(name[i]) << endl;
                i++;                    // don't forget this step
        }
        waiting();
        return 0;
}

int waiting()
{
        using namespace std;
        // 5.14 waiting.cpp -- using clock() in a time-delay loop
        cout << "5.14" << endl;

        cout << "Enter the delay time, in seconds: ";
        float secs;
        cin >> secs;
        clock_t delay = secs * CLOCKS_PER_SEC;  // convert to clock ticks
        cout << "starting\a\n";
        clock_t start = clock();
        while (clock() - start < delay)         // wait until time elapses
                ;                               // note the semicolon
        cout << "done \a\n";
        dowhile();
        return 0;
}

int dowhile()
{
        using namespace std;
        // 5.15 dowhile.cpp -- exit-condition loop
        cout << "5.15" << endl;

        int n;

        cout << "Enter numbers in the range 1-10 to find ";
        cout << "my favourite number\n";
        do
        {
                cin >> n;       // execute body
        } while (n != 7);       // then test
        cout << "Yes, 7 is my favourite.\n";
        textin1();
        return 0;
}

int textin1()
{
        using namespace std;
        // 5.16 textin1.cpp -- reading chars with a while loop
        cout << "5.16" << endl;

        char ch;
        int count = 0;          // use basic input
        cout << "Enter characters; enter # to quit:\n";
        cin >> ch;              // get a character
        while (ch != '#')       // test the character
        {
                cout << ch;     // echo the character
                ++count;        // count the character
                cin >> ch;      // get the next character
        }
        cout << endl << count << " characters read\n";
        textin2();
        return 0;
}

int textin2()
{
        using namespace std;
        // 5.17 textin2.cpp -- using cin.get(char)
        cout << "5.17" << endl;

        char ch;
        int count = 0;

        cout << "Enter characters; enter # to quit:\n";
        cin.get(ch);            // use the cin.get(ch) function
        while (ch != '#')
        {
                cout << ch;
                ++count;
                cin.get(ch);    // use it again
        }
        cout << endl << count << " characters read\n";
        textin3();
        return 0;
}

int textin3()
{
        using namespace std;
        // 5.18 textin3.cpp -- reading chars to end of file
        cout << "5.18" << endl;

/* My device can't handle EOF, so this part is not going to running
        char ch;
        int count = 0;
        cin.get(ch);            // attempt to read a char
        while (cin.fail() == false)     // test for EOF
        {
                cout << ch;     // echo character
                ++count;
                cin.get(ch);    // attempt to read another char
        }
        cout << endl << count << " characters read\n";
*/
        textin4();
        return 0;
}

int textin4()
{
        using namespace std;
        // 5.19 textin4.cpp -- reading chars with cin.get()
        cout << "5.19" << endl;

/*
        int ch;                         // should be int, not char
        int count = 0;

        while ((ch = cin.get()) != EOF) // test for end-of-file
        {
                cout.put(char(ch));
                ++count;
        }
        cout << endl << count << " characters read\n";
*/
        nested();
        return 0;
}

// 5.20 nested.cpp -- nested loops 2-D array
const int Cities = 5;
const int Years = 4;
int nested()
{
        using namespace std;
        cout << "5.20" << endl;

        const char * cities[Cities] =   // array of pointers
        {                               // to 5 strings
                "Gribble City",
                "Gribbletown",
                "New Gribble",
                "San Gribble",
                "Gribble Vista"
        };

        int maxtemps[Years] [Cities] =  // 2-D array
        {
                {96, 100, 87, 101, 105},        // values for maxtemps[0]
                {96, 98, 91, 107, 104},         // values for maxtemps[1]
                {97, 101, 93, 108, 107},        // values for maxtemps[2]
                {98, 103, 95, 109, 108}         // values for maxtemps[3]
        };

        cout << "Maximum temperatures for 2008 - 2011\n\n";
        for (int city = 0; city < Cities; ++city)
        {
                cout << cities[city] << ":\t";
                for (int year = 0; year < Years; ++year)
                        cout << maxtemps[year] [city] << "\t";
                cout << endl;
        }
                // cin.get();
        return 0;
}