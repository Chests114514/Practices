#include <iostream>
#include <string>
#include <cstdlib>
#include <cryptopp/hex.h>
#include <cryptopp/sha.h>

bool check();
bool checkHash(const std::string& input, const std::string& hash);

int main()
{
	using namespace std;
	if (check() == true) {
		system("$ip=$(ifconfig | awk '
		/^wlan0:/ {
			interface=1
			next
		}
		interface && /^[[:space:]]*inet / {
			split($2, a, \"/\")
			print a[1]
			interface=0
		}
		/^[[:alnum:]]/ && !/^wlan0:/ {
			interface=0
		}
	')");
		system("export DISPLAY=${ip}:0");
                system("export PULSE_SERVER=${ip}:4713");
		system("icewm &");
		system("xterm &");
                system("icewmbg -p /storage/emulated/0/Pictures/hw_wallpaper/current_wallpaper_crop.jpg");
                system("termux-api-start");
                system("termux-wake-lock");
	} else if (check() == false) {
		cout << "\033[1;31mError: Incorrect Username or Password\033[0m" << endl;
                return 1;
        }
}
bool check()
{
	using namespace std;
	string usernameHash = "36edbe301531cb43df025dcf7c7dd2c517d68ba9d025f31c7dc905fef5d1bcda";
	string passwdHash = "3cd99bb4cd15b03790965dfe8bec612cd158faba2adff3fffb8e38eb48c426d4";
	string inputUsername;
	string inputPasswd;

	cout << "\033[1;32mWelcome to XSDL Display\033[0m" << endl;
	cout << "Username:__________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin >> inputUsername;
	if (checkHash(inputUsername, usernameHash)) {
		cout << "Password:__________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		cin >> inputPasswd;
		if (checkHash(inputPasswd, passwdHash)) {
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}

bool checkHash(const std::string& input, const std::string& hash)
{
	CryptoPP::SHA256 hashFn;
	std::string digest, encodedDigest;
	CryptoPP::StringSource(input, true,
		new CryptoPP::HashFilter(hashFn,
			new CryptoPP::StringSink(digest)
		)
	);
	CryptoPP::StringSource(digest, true,
		new CryptoPP::HexEncoder(
			new CryptoPP::StringSink(encodedDigest), false
		)
	);
	return (encodedDigest == hash);
}
