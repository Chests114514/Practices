// Chapter 4 Homework 9

#include <iostream>
#include <string>

struct candybar {
        std::string name;
        double weight;
        int calories;
};

int main() {
        using namespace std;

        int size = 3;

        candybar * candies = new candybar[size];

        candies[0] = {"Mocha Munch", 2.3, 350};
        candies[1] = {"Crispy Chunch", 1.8, 280};
        candies[2] = {"Peanut Butter Cup", 2.5, 420};

        for (int i = 0; i < size; ++i) {
                cout << "Candy #" << i + 1 << ":\n";
                cout << " Brand: " << candies[i].name << endl;
                cout << " Weight: " << candies[i].weight << " oz" << endl;
                cout << " Calories: " << candies[i].calories << " kcal" << endl;
        }
        
        delete [] candies;
        candies = nullptr;
        
        return 0;
}