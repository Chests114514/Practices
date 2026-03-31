// Start To Study Cpp

#include <iostream> // This header includes "cout" and "cin", in the name, "io" is input/output
#include <cmath> // This header is about maths

int carrots(); // you need to declare this function before if your function is after "int main"
int getinfo();
int sqrt();
int ourfunc();
int convert();
int stonebolb(int);

void simon(int); // function prototype for simon()

int main() // There must be one main function in every cpp file
{
	using namespace std; // This is a namespace, e.g.: there are two firm makes a function that have same name, one is caled Microflop, and one is Piscine, use this to choose which version will you use
	// 2.1 myfirst.cpp -- display a message
	cout << "2.1" << endl;
	cout << "Come up and C++ me sometime.";		// message
	cout << endl; 					// with command "endl" you can start a new line "ENDLine", for change a line, you can also use "\n" at the end of text
	cout << "You won't regret it!" << endl;		// or you can also do this
	carrots();					// to start the next function
	return 0;
}

int carrots() // If you want to make more than 1 function, you need to use void(don't accept any parameter)
{
	using namespace std;
	// 2.2 carrots.cpp -- food processing program
	cout << "2.2" << endl;
	int carrots;					// declare an integer variable

	carrots = 25;					// assign a value to the variable
	cout << "I have ";
	cout << carrots;				// display the value of the variable
	cout << " carrots." << endl;

	carrots = carrots - 1;				// modify the variable(only do this when variable is a number)
	cout << "Crunch, Crunch. Now I have " << carrots << " carrots." << endl; // do like this is also ok
	getinfo();
	return 0;
}

int getinfo()
{
	using namespace std;
	// 2.3 getinfo.cpp -- input and output
	cout << "2.3" << endl;
	int apples;

	cout << "How many apples do you have? " << endl;
	cin >> apples;					// C++ input
	cout << "Here are 2 more. " << endl;
	apples = apples + 2;
	cout << "Now you have " << apples << " apples." << endl;
	sqrt();
	return 0;
}

int sqrt()
{
	using namespace std;
	// 2.4 sqrt.cpp -- using sqrt() (SQuare RooT) function
	cout << "2.4" << endl;
	double area;					// That says this variable (maybe) include decimals
	double side;

	cout << "Enter a area of a square (m^2): ";
	cin >> area;
	side = sqrt(area);
	cout << side << " is the side long of the square." << endl;
	ourfunc();
	return 0;
}

int ourfunc()
{
	using namespace std;
	// 2.5 ourfunc.cpp -- defining your own function (part 1)
	cout << "2.5" << endl;
	simon(3);					// call the simon function
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);					// call it again
	cout << "Done!" << endl;
	convert();
	return 0;
}

void simon(int n)	// define the simon function
{
	using namespace std;
	// 2.5 ourfunc.cpp -- defining your own function (part 2)
	cout << "Simon says touch your toes " << n << " times." << endl;
}	// void functions don't need return statements


int convert()
{
	using namespace std;
	// 2.6 convert.cpp -- converts stone to pounds (part 1)
	cout << "2.6" << endl;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonebolb(stone);
	cout << stone << " stone = " << pounds << " pounds." << endl;	// you can also put functions in cout, e.g.: cout << stonebolb(11) << endl;
	return 0;
}

int stonebolb(int sts)
{
	// 2.6 convert.cpp -- converts stone to pounds (part 2)
	int pounds = 14 * sts;
	return pounds;					// if the return value is conplicated, use this, if not, you can use `return 14 * sts` instead
}
