// Composite

#include <iostream>	// 4.1 4.2 4.3 4.4 4.5 4.6 4.7 4.8 4.9 4.10 4.11 4.12 4.13 4.14 4.15 4.16 4.17 4.18 4.19 4.20
#include <cstring>	// 4.2 4.9 4.10 4.20
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
int address();
int pointer();
int init_ptr();
int use_new();
int arraynew();
int addpntrs();
int ptrstr();

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
        address();
        return 0;
}

int address()
{
        using namespace std;
        // 4.14 address.cpp -- using the & operator to find addresses
        cout << "4.14" << endl;

        int donuts = 6;
        double cups = 4.5;

        cout << "donuts value = " << donuts;
        cout << " and donuts address = " << &donuts << endl;
// NOTE: you may need to use unsigned (&donuts)
// and unsigned (&cups)
        cout << "cups value = " << cups;
        cout << " and cups address = " << &cups << endl;
        pointer();
        return 0;
}

int pointer()
{
        using namespace std;
        // 4.15 pointer.cpp -- our first pointer variable
        cout << "4.15" << endl;

        int updates = 6;        // declare a variable
        int * p_updates;        // declare pointer to an int
        p_updates = &updates;   // assign address of int to pointer

// express values two ways
        cout << "Values: updates = " << updates;
        cout << ", *p_updates = " << *p_updates << endl;

// express address two ways
        cout << "Addresses: &updates = " << &updates;
        cout << ", p_updates = " << p_updates << endl;

// use pointer to change value
        *p_updates = *p_updates + 1;
        cout << "Now updates = " << updates << endl;
        init_ptr();
        return 0;
}

int init_ptr()
{
        using namespace std;
        // 4.16 init_ptr.cpp -- initialize a pointer
        cout << "4.16" << endl;

        int higgens = 5;
        int * pt = &higgens;

        cout << "Value of higgens = " << higgens
             << "; Address of higgens = " << &higgens << endl;
        cout << "Value of *pt = " << *pt
             << "; Value of pt = " << pt << endl;
        use_new();
        return 0;
}

int use_new()
{
        using namespace std;
        // 4.17 use_new.cpp -- using the new operator
        cout << "4.17" << endl;

        int nights = 1001;
        int * pt = new int;             // allocate space for an int
        *pt = 1001;                     // store a value there

        cout << "nights value = ";
        cout << nights << ": location " << &nights << endl;
        cout << "int ";
        cout << "value = " << *pt << ": location = " << pt << endl;
        double * pd = new double;       // allocate space for a double
        *pd = 10000001.0;               // store a double there

        cout << "double ";
        cout << "value = " << *pd << ": location = " << pd << endl;
        cout << "location of pointer pd: " << &pd << endl;
        cout << "size of pt = " << sizeof(pt);
        cout << ": size of *pt = " << sizeof(*pt) << endl;
        cout << "size of pd = " << sizeof(pd);
        cout << ": size of *pd = " << sizeof(*pd) << endl;

        // not appeared in book but recommended, to release memory
        // run a server without this may cause memory overflow
        delete pt;
        pt = nullptr;
        delete pd;
        pd = nullptr;
        arraynew();
        return 0;
}

int arraynew()
{
        using namespace std;
        // 4.18 arraynew.cpp -- using the new operator for arrays
        cout << "4.18" << endl;

        double * p3 = new double [3];   // space for 3 doubles
        p3[0] = 0.2;                    // treay p3 like an array name
        p3[1] = 0.5;
        p3[2] = 0.8;
        cout << "p3[1] is " << p3[1] << ".\n";
        p3 = p3 + 1;                    // increment the pointer
        cout << "Now p3[0] is " << p3[0] << " and ";
        cout << "p3[1] is " << p3[1] << ".\n";
        p3 = p3 - 1;                    // point back to beginning
        delete [] p3;                   // free the memory
        p3 = nullptr;
        addpntrs();
        return 0;
}

int addpntrs()
{
        using namespace std;
        // 4.19 addpntrs.cpp -- pointer addition
        cout << "4.19" << endl;

        double wages[3] = {10000.0, 20000.0, 30000.0};
        short stacks[3] = {3, 2, 1};

// Here are two ways to get the address of an array
        double * pw = wages;            // name of an array = address
        short * ps = &stacks[0];        // or use address operator
// with array element
        cout << "pw = " << pw << ", *pw = " << *pw << endl;
        pw = pw + 1;
        cout << "add 1 to the pw pointer:\n";
        cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
        cout << "ps = " << ps << ", *ps = " << *ps << endl;
        ps = ps + 1;
        cout << "add 1 to the ps pointer :\n";
        cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

        cout << "access two elements with array notation\n";
        cout << "stacks[0] = " << stacks[0]
             << ", stacks[1] = " << stacks[1] << endl;
        cout << "access two elements with pointer notation\n";
        cout << "*stacks = " << *stacks
             << ", *(stacks + 1) = " << "*(stacks + 1)" << endl;

        cout << sizeof(wages) << " = size of wages array\n";
        cout << sizeof(pw) << " = size of pw pointer\n";
        ptrstr();
        return 0;
}

int ptrstr()
{
        using namespace std;
        // 4.20 ptrstr.cpp -- using pointers to strings
        cout << "4.20" << endl;

        char animal[20] = "bear";       // animal holds bear
        const char * bird = "wren";     // bird holds address of string
        char * ps;                      // uninitialized

        cout << animal << " and ";      // display bear
        cout << bird << "\n";           // display wren

        // cout << ps << "\n";          // may display garbage, may cause crash

        cout << "Enter a kind of animal: ";
        cin >> animal;                  // ok if input < 20 chars
        // cin >> ps; Too horrible a blunder to try; ps doesn't
        //            point to allocated space

        ps = animal;                    // set ps to point to string
        cout << ps << "!\n";            // ok, same as using animal
        cout << "Before using strcpy():\n";
        cout << animal << " at " << (int *) animal << endl;
        cout << ps << " at " << (int *) ps << endl;

        ps = new char[strlen(animal) + 1];      // get new storage
        strcpy(ps, animal);             // copy string to new storage
        cout << "After using strcpy():\n";
        cout << animal << " at " << (int *) animal << endl;
        cout << ps << " at " << (int *) ps << endl;
        delete [] ps;
        ps = nullptr;
        return 0;
}