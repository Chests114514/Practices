#include <iostream>
#include <cstdlib>
#include <chrono>

int main() {
        using namespace std;
        
        auto now = chrono::high_resolution_clock::now();
        auto ns = now.time_since_epoch().count();
        srand(static_cast<unsigned int>(ns)); // Seed the random number generator with the current time
        
        int face;
        int r;
        cout << "Enter the number of faces on the die: ";
        cin >> face;

        if (face < 1) {
                cout << "The number of faces must be at least 1." << endl;
                return 1; // Exit with an error code
        }

        r = 1 + rand() % ( face - 1 + 1); // Generate a random number between 1 and face
        cout << "The die rolled: " << r << endl;
        return 0;
}