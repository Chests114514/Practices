// Chapter 4 Homework 7

#include <iostream>
#include <cstring>

struct pizza {
        char brand[30];
        int diameter;
        double weight;
};

int main() {
        using namespace std;

        pizza * example = new pizza;

        cout << "Brand:";
        cin >> example->brand;
        cout << "Diameter:";
        cin >> example->diameter;
        cout << "Weight:";
        cin >> example->weight;


        cout << "Brand: " << example->brand << endl;
        cout << "Diameter: " << example->diameter << endl;
        cout << "Weight: " << example->weight << endl;
        
        delete example;
        example = nullptr;

        return 0;
}