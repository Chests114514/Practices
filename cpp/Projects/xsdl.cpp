#include <iostream>
#include <string>
#include <cstdlib>

int check();

int main()
{
	using namespace std;
	if (check() == true) {
		system();
		system();
		system("icewm &");
		system("xterm &");
	} else if (check() == false) {
		cout << "\033[1;31mError: Incorrect Username or Password\033[0m" << endl;
                return 1;
        }
}
int check()
{
	using namespace std;
	string usernameHash = "";
	string passwdHash = "";
	string inputUsername = "";
	string inputPasswd = "";

	cout << "\033[1;32mWelcome to XSDL Display\033[0m" << endl;
	cout << "Username:__________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin >> inputUsername;
	if (inputUsername == usernameHash) {
		cout << "Password:__________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		cin >> inputPasswd;
		if (inputPasswd == passwdHash) {
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}
