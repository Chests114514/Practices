// Chapter 5 Homework 4

#include <iostream>
#include <cmath>

double calcDaphne(double principal, double rate, int years) {
        return principal * (1 + rate / 100.0 * years);
}
double calcCleo(double principal, double rate, int years) {
        return principal * pow(1 + rate / 100.0, years);
}

int main() {
        using namespace std;
        
        const double PRINCIPAL = 100.0;
        const double DAPHNE_RATE = 10.0;
        const double CLEO_RATE = 5.0;

        int years = 0;
        double daphneValue = PRINCIPAL;
        double cleoValue = PRINCIPAL;

        while (cleoValue <= daphneValue) {
                years++;
                daphneValue = calcDaphne(PRINCIPAL, DAPHNE_RATE, years);
                cleoValue = calcCleo(PRINCIPAL, CLEO_RATE, years);
        }

        cout << "After " << years << " years, Cleo's value is higher than Daphne.\n";
        cout << "Daphne's Value: " << daphneValue << endl;
        cout << "Cleo's Value: " << cleoValue << endl;

        return 0;
}