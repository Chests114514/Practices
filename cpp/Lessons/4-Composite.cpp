// Composite

#include <iostream>	// 4.1 4.2 4.3 4.4 4.5 4.6 4.7
#include <cstring>	// 4.2
#include <string>       // 4.7

int strings();
int instr1();
int instr2();
int instr3();
int numstr();
int strtype1();

int main()
{
	using namespace std;
	// 4.1 arryayone.cpp -- small arrays of integers
	cout << "4.1" << endl;

	int yams[3];	// creates array with three elements
	yams[0] = 7;	// assign value to first element
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = {20, 30, 5};	// create, initalize array
/* NOTE: If your C++ complier or translator can't initalize
   this array, use `static int yamcosts[3]` instead of
   `int yamcosts[3]`
*/

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof yams;
	cout << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\n";
	strings();
	return 0;
}

int strings()
{
	using namespace std;
	// 4.2 strings.cpp -- storing strings in an array
	cout << "4.2" << endl;
	
	const int Size = 15;
	char name1[Size];			// empty array
	char name2[Size] = "C++owboy";		// initialized array
	// NOTE: some implementations may require the static keyword
	// to initialize the array name2
	
	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "your initial is " << name1[0] << ".\n";
	name2[3] = '\0';			// set to null character
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
	instr1();
	return 0;
}

int instr1()
{
        using namespace std;
        // 4.3 instr1.cpp -- reading more than one string
        cout << "4.3" << endl;
        
        const int ArSize = 20;
        char name[ArSize];
        char dessert[ArSize];
        
        cout << "Enter your name:\n";
        cin >> name;
        cout << "Enter your favorite dessert:\n";
        cin >> dessert;
        cout << "I have some delicious " << dessert;
        cout << " for you, " << name << ".\n";
        instr2();        
        return 0;
}

int instr2()
{
        using namespace std;
        // 4.4 instr2.cpp -- reading more than one word with getline
        cout << "4.4" << endl;
        
        const int ArSize = 20;
        char name[ArSize];
        char dessert[ArSize];
        
        cout << "Enter your name:\n";
        cin.getline(name, ArSize);      // reads through newline
        cout << "Enter your favorite dessert:\n";
        cin.getline(dessert, ArSize);
        cout << "I have some delicious " << dessert;
        cout << " for you, " << name << ".\n";
        instr3();
        return 0;
}

int instr3()
{
        using namespace std;
        // instr3.cpp -- reading more than one word with get() & get()
        cout << "4.5" << endl;
        
        const int ArSize = 20;
        char name[ArSize];
        char dessert[ArSize];
        
        cout << "Enter your name:\n";
        cin.get(name, ArSize).get();    // read string, newline
        cout << "Enter your favorite dessert:\n";
        cin.get(dessert, ArSize).get();
        cout << "I have some delicious " << dessert;
        cout << " for you, " << name << ".\n";
        numstr();
        return 0;
}

int numstr()
{
        using namespace std;
        // 4.6 numstr.cpp -- following number input with line input
        cout << "4.6" << endl;
        
        cout << "What year was your house built?\n";
        int year;
        cin >> year;
        cout << "What is its street address?\n";
        char address[80];
        cin.getline(address, 80);
        cout << "Year built: " << year << endl;
        cout << "Address: " << address << endl;
        cout << "Done!\n";
        strtype1();
        return 0;
}

int strtype1()
{
        using namespace std;
        // 4.7 strtype1.cpp -- using the C++ string class
        cout << "4.7" << endl;

        char charr1[20];                // create an empty array
        char charr2[20] = "jaguar";     // create an initialized array
        string str1;                    // create an empty string object
        string str2 = "panther";        // create an initialized string
        
        cout << "Enter a kind of feline: ";
        cin >> charr1;
        cout << "Enter another kind of feline: ";
        cin >> str1;                    // use cin for input
        cout << "Here are some felines:\n";
        cout << charr1 << " " << charr2 << " "
             << str1 << " " << str2 <<  // use cout for output
             endl;
        cout << "The third letter in " << charr2 << " is "
             << charr2[2] << endl;
        cout << "The third letter in " << str2 << " is "
             << str2[2] << endl;        // use array notation
        return 0;
}
