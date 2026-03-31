// Composite

#include <iostream>	// 4.1 4.2 4.3 4.4 4.5 4.6 4.7 4.8 4.9 4.10 4.11 4.12 4.13
#include <cstring>	// 4.2 4.9 4.10
#include <string>       // 4.7 4.8 4.9 4.10

int strings();
int instr1();
int instr2();
int instr3();
int numstr();
int strtype1();
int strtype2();
int strtype3();
int strtype4();
int structur();
int assgn_st();
int arrstruc();

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
        strtype2();
        return 0;
}

int strtype2()
{
        using namespace std;
        // 4.8 strtype2.cpp -- assigning, adding, and appending
        cout << "4.8" << endl;

        string s1 = "penguin";
        string s2, s3;

        cout << "You can assign one string object to another: s2 = s1\n";
        s2 = s1;
        cout << "s1: " << s1 << ", s2: " << s2 << endl;
        cout << "You can assign a C-style string to a string object.\n";
        cout << "s2 = \"buzzard\"\n";
        s2 = "buzzard";
        cout << "s2: " << s2 << endl;
        cout << "You can concatenate strings: s3 = s1 + s2\n";
        s3 = s1 + s2;
        cout << "s3: " << s3 << endl;
        cout << "You can append strings.\n";
        s1 += s2;
        cout << "s1 += s2 yields s1 = " << s1 << endl;
        s2 += " for a day";
        cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;
        strtype3();
        return 0; 
}

int strtype3()
{
        using namespace std;
        // 4.9 strtype3.cpp -- more string class features
        cout << "4.9" << endl;

        char charr1[20];
        char charr2[20] = "jaguar";
        string str1;
        string str2 = "panther";

        // assignment for string objects and character arrays
        str1 = str2;                    // copy str2 to str1
        strcpy(charr1, charr2);         // copy charr2 to charr1

        // appending for string objects and character arrays
        str1 += " paste";               // add paste to end of str1
        strcat(charr1, " juice");       // add juice to the end of charr1

        // finding the length of a string object and a C-style string
        int len1 = str1.size();         // obtain length of str1
        int len2 = strlen(charr1);      // obtain length of charr1

        cout << "The string " << str1 << " contains "
             << len1 << " characters.\n";
        cout << "The string " << charr1 << " contains "
             << len2 << " characters.\n";
        strtype4();
        return 0;
}

int strtype4()
{
        using namespace std;
        // 4.10 strtype.cpp -- line input
        cout << "4.10" << endl;

        char charr[20];
        string str;

        cout << "Length of string in charr before input: "
             << strlen(charr) << endl;
        cout << "Length of string in str before input: "
             << str.size() << endl;
        cout << "Enter a line of text:\n";
        cin.getline(charr, 20);         // indicate maximum length
        cout << "You entered: " << charr << endl;
        cout << "Enter another line of text:\n";
        getline(cin, str);              // cin now an argument; no length specifier
        cout << "You entered: " << str << endl;
        cout << "Length of strin in charr after input: "
             << strlen(charr) << endl;
        cout << "Length of string in str after input: "
             << str.size() << endl;
        structur();
        return 0;
}

// 4.11 structur.cpp -- a simple structure
struct inflatable
{
        char name[20];
        float volume;
        double price;
};
int structur()
{
        using namespace std;
        cout << "4.11" << endl;

        inflatable guest =
        {
                "Glorious Gloria",      // name value
                1.88,                   // volume value
                29.99                   // price value
        };      // guest is a structure variable of type inflatable
// It's initialized to the indicated values
        inflatable pal =
        {
                "Audacious Arthur",
                3.12,
                32.99
        };      // pal is a second variable of type inflatable
// NOTE: some inplementations require using
// static inflatable guest =

        cout << "Expand your guest list with " << guest.name;
        cout << " and " << pal.name << "!\n";
// pal.name is the name member of the pal variable
        cout << "You can have both for $";
        cout << guest.price + pal.price << "!\n";
        assgn_st();
        return 0;
}

// 4.12 assgn_st.cpp -- assigning structures
struct _inflatable      // use a underline here because 4.11 have already structed `inflatable`
{
        char name[20];
        float volume;
        double price;
};
int assgn_st()
{
        using namespace std;
        cout << "4.12" << endl;
        _inflatable bouquet =
        {
                "sunflowers",
                0.20,
                12.49
        };
        _inflatable choice;
        cout << "bouquet: " << bouquet.name << " for $";
        cout << bouquet.price << endl;

        choice = bouquet;       // assign one structure to anothe
        cout << "choice: " << choice.name << " for $";
        cout << "choice.price" << endl;
        arrstruc();
        return 0;
}

// 4.13 arrstruc.cpp -- an array of structures
struct __inflatable
{
        char name[20];
        float volume;
        double price;
};
int arrstruc()
{
        using namespace std;
        cout << "4.13" << endl;

        __inflatable guests[2] =                // initializing an array of structs
        {
                {"Bambi", 0.5, 21.99},          // first structure in array
                {"Godzilla", 2000, 565.99}      // next structure in array
        };

        cout << "The guests " << guests[0].name << " and " << guests[1].name
             << "\nhave a combined volume of "
             << guests[0].volume + guests[1].volume << " cubic feet.\n";
        return 0;
}