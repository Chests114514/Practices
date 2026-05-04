// Chapter 4 Homework 6

#include <iostream>

struct candybar {
        char brand[30];
        double weight;
        int calories;
};

int main() {
        using namespace std;
        candybar mocha =
        {
                "Mocha Factory ",
                3.3 ,
                182 
        };
        candybar chocolate =
        {
                "Chocolate World ",
                4.8 ,
                480 
        };
        candybar sugar =
        {
                "Sugar Rhapsody ",
                1.2 ,
                302 
        };

        cout << "Brand: " << mocha.brand << chocolate.brand << sugar.brand << endl;
        cout << "Weight: " << mocha.weight << chocolate.weight << sugar.weight << endl;
        cout << "Calories: " << mocha.calories << chocolate.calories << sugar.calories << endl;

        return 0;
}