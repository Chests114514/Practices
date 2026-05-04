// Chapter 4 Homework 5

#include <iostream>

struct candybar {
        char brand[30];
        double weight;
        int calories;
};

int main() {
        using namespace std;

        candybar snack =
        {
                "Mocha Munch",
                2.3,
                350
        };

        cout << "Brand: " << snack.brand << endl;
        cout << "Weight: " << snack.weight << endl;
        cout << "Calories: " << snack.calories << endl;
        return 0;
}