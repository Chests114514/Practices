// Processing Data

#include <iostream>					// 3.1 3.2 3.3 3.4 3.5 3.6 3.7 3.8 3.9 3.10 3.11 3.13 3.14
#include <climits>					// 3.1 3.2

int exceed();
int hexoct1();
int hexoct2();
int chartype();
int morechar();
int bondini();
int floatnum();
int fltadd();
int arith();
int divide();
int _modulus();
int init();
int typecast();

int main()
{
	using namespace std;
	// 3.1 limits.cpp -- some integer limits
	cout << "3.1" << endl;

	int n_int = INT_MAX;				// initalize n_int to max int value
	short n_short = SHRT_MAX;			// symbols defined in climits file
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

		// size of operator yields size of type or of variable
	cout << "int is " << sizeof (int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	cout << "Maximum values: " << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	exceed();
	return 0;
}

#define ZERO 0
int exceed()
{
	using namespace std;
	// 3.2 exceed.cpp -- exceeding some integer limits
	cout << "3.2" << endl;

	short sam = SHRT_MAX;				// initalize a variable to max value
	unsigned short sue = sam;			// okay if variable sam already defined

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Add $1 to each account" << endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars depostied." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	hexoct1();
	return 0;
}
#undef ZERO

int hexoct1()
{
	using namespace std;
	// 3.3 hexoct1.cpp -- shows hex an octal literals
	cout << "3.3" << endl;

	int chest = 42;					// decimal integer literal
	int waist = 0x42;				// hexadecimal integer literal
	int inseam = 042;				// octal integer literal

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
	hexoct2();
	return 0;
}

int hexoct2()
{
	using namespace std;
	// 3.4 hexoct2.cpp -- display values in hex and octal
	cout << "3.4" << endl;

	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cots a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;					// manipulator for changing number base
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct;					// manipulator for changing number base
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	cout << dec;
	chartype();
	return 0;
}

int chartype()
{
	using namespace std;
	// 3.5 chartype.cpp -- the char type
	cout << "3.5" << endl;				// declare a char variable

	char ch;
	cout << "Enter one character: " << endl;
	cin >> ch;
	cout << "Hola! ";
	cout << "Thank you for the " << ch << " character." << endl;
	morechar();
	return 0;
}

int morechar()
{
	using namespace std;
	// 3.6 morechar.cpp -- the char type and int type contrasted
	cout << "3.6" << endl;

	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code:" << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

		// using the cout.put member function to display a char
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);

		// using cout.put() to display a char constant
	cout.put('!');
	cout << endl << "Done!" << endl;
	bondini();
	return 0;
}

int bondini()
{
	using namespace std;
	// 3.7 bondini.cpp -- using escape sequences
	cout << "3.7" << endl;

	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";
	floatnum();
	return 0;
}

int floatnum()
{
	using namespace std;
	// 3.8 floatnum.cpp -- floating-point types
	cout << "3.8" << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);	// fixed-point ( force function to display float number with a decimal point)
	float tub = 10.0 / 3.0;				// good to about 6 places
	double mint = 10.0 / 3.0;			// good to about 15 places
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	fltadd();
	return 0;
}

int fltadd()
{
	using namespace std;
	// 3.9 fltadd.cpp -- precision problems with float
	cout << "3.9" << endl;

	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;
	arith();
	return 0;
}

int arith()
{
	using namespace std;
	// 3.10 arith.cpp -- some C++ arithmetic
	cout << "3.10" << endl;

	float hats, heads;
	cout.setf(ios_base::fixed, ios_base::floatfield);	// fixed-point (force function to display float number with a decimal point)
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	divide();
	return 0;
}

int divide()
{
	using namespace std;
	// 3.11 divide.cpp -- integer and floating point division
	cout << "3.11" << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer devision: 9/5 = " << 9 / 5 << endl;
	cout << "Floating-point division: 9.0/5.0 = ";
	cout << 9.0 / 5.0 << endl;
	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants: 1e7/9.0 = ";
	cout << 1.e7 / 9.0 << endl;
	cout << "float constants: 1e7f/9.0f = ";
	cout << 1.e7f / 9.0f << endl;
	_modulus();
	return 0;
}

int _modulus()
{
	using namespace std;
	// 3.12 modulus.cpp -- use % operator to convert lbs to stone
	cout << "3.12" << endl;

	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;			// whole stone
	int pounds = lbs % Lbs_per_stn;			// remainder in pounds
	cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n";
	init();
	return 0;
}

int init()
{
	using namespace std;
	// 3.13 init.cpp -- type changes on initalization
	cout << "3.13" << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;					// int converted to float
	int guess(3.9832);				// double converted to int
	int debt = 7.2E12;				// result not defined in C++
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	typecast();
	return 0;
}

int typecast()
{
	using namespace std;
	// 3.14 typecast.cpp -- forcing type changes
	cout << "3.14" << endl;

	int auks, bats, coots;

	/* the following statement adds the values as double,
	then converts the result to int */
	auks = 19.99 + 11.99;

	// these statements add values as int
	bats = (int) 19.99 + (int) 11.99;		// old C syntax
	coots = int (19.99) + int (11.99);		// new C++ syntax
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is ";	// print as char
	cout << int(ch) << endl;			// print as int
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;		// using static_cast
	return 0;
}
