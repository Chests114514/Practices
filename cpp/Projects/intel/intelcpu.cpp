#include <iostream>

int main() {
        using namespace std;

        int c3 = 10;
        int c5 = 20;
        int c7 = 30;
        int c9 = 40;

        char series;
        int version;
        int generation;
        int wattage;
        int lastnum;
        int integratedgpu;
        int solution = 0;

        cout << "Enter the serie (u/i): ";
        cin >> series;

        if (series == 'u') {
                cout << "Version (3/5/7/9): ";
                cin >> version;

                if (version == 3) {
                        solution = c3;
                        cout << "Generation: ";
                        cin >> generation;
                        
                        generation = generation * 6;
                        solution = solution + generation;

                        cout << "Wattage(U(0)/H(10)/HX(20)/V(4)): ";
                        cin >> wattage;
                        solution = solution + wattage;

                        cout << "Last number of the CPU: ";
                        cin >> lastnum;
                        lastnum = lastnum / 10;
                        solution = solution + lastnum;

                        cout << "Integrated GPU (0/1): ";
                        cin >> integratedgpu;
                        integratedgpu = integratedgpu * 10;
                        solution = solution + integratedgpu;
                }

                if (version == 5) {
                        solution = c5;
                        cout << "Generation: ";
                        cin >> generation;

                        generation = generation * 6;
                        solution = solution + generation;

                        cout << "Wattage(U(0)/H(10)/HX(20)/V(4)): ";
                        cin >> wattage;
                        solution = solution + wattage;

                        cout << "Last number of the CPU: ";
                        cin >> lastnum;
                        lastnum = lastnum / 10;
                        solution = solution + lastnum;

                        cout << "Integrated GPU (0/1): ";
                        cin >> integratedgpu;
                        integratedgpu = integratedgpu * 10;
                        solution = solution + integratedgpu;
                }
                
                if (version == 7) {
                        solution = c7;
                        cout << "Generation: ";
                        cin >> generation;

                        generation = generation * 6;
                        solution = solution + generation;

                        cout << "Wattage(U(0)/H(10)/HX(20)/V(4)): ";
                        cin >> wattage;
                        solution = solution + wattage;

                        cout << "Last number of the CPU: ";
                        cin >> lastnum;
                        lastnum = lastnum / 10;
                        solution = solution + lastnum;

                        cout << "Integrated GPU (0/1): ";
                        cin >> integratedgpu;
                        integratedgpu = integratedgpu * 10;
                        solution = solution + integratedgpu;
                }

                if (version == 9) {
                        solution = c9;
                        cout << "Generation: ";
                        cin >> generation;

                        generation = generation * 6;
                        solution = solution + generation;

                        cout << "Wattage(U(0)/H(10)/HX(20)/V(4)): ";
                        cin >> wattage;
                        solution = solution + wattage;

                        cout << "Last number of the CPU: ";
                        cin >> lastnum;
                        lastnum = lastnum / 10;
                        solution = solution + lastnum;

                        cout << "Integrated GPU (0/1): ";
                        cin >> integratedgpu;
                        integratedgpu = integratedgpu * 10;
                        solution = solution + integratedgpu;
                }
        }

        if (series == 'i') {
                cout << "Version (3/5/7/9): ";
                cin >> generation;

                if (generation == 3) {
                        solution = c3;
                        cout << "Generation: ";
                        cin >> generation;

                        generation = generation * 3;
                        solution = solution + generation;

                        cout << "Wattage(U(0)/H(10)/HX(20)/V(4)): ";
                        cin >> wattage;
                        solution = solution + wattage;

                        cout << "Last number of the CPU: ";
                        cin >> lastnum;
                        lastnum = lastnum / 10;
                        solution = solution + lastnum;
                }

                if (generation == 5) {
                        solution = c5;
                        cout << "Generation: ";
                        cin >> generation;

                        generation = generation * 3;
                        solution = solution + generation;

                        cout << "Wattage(U(0)/H(10)/HX(20)V(4)): ";
                        cin >> wattage;
                        solution = solution + wattage;

                        cout << "Last number of the CPU: ";
                        cin >> lastnum;
                        lastnum = lastnum / 10;
                        solution = solution + lastnum;
                }
                
                if (generation == 7) {
                        solution = c7;
                        cout << "Generation: ";
                        cin >> generation;

                        generation = generation * 3;
                        solution = solution + generation;

                        cout << "Wattage(U(0)/H(10)/HX(20)/V(4)): ";
                        cin >> wattage;
                        solution = solution + wattage;
                        
                        cout << "Last number of the CPU: ";
                        cin >> lastnum;
                        lastnum = lastnum / 10;
                        solution = solution + lastnum;
                }

                if (generation == 9) {
                        solution = c9;
                        cout << "Generation: ";
                        cin >> generation;

                        generation = generation * 3;
                        solution = solution + generation;

                        cout << "Wattage(U(0)/H(10)/HX(20)/V(4)): ";
                        cin >> wattage;
                        solution = solution + wattage;

                        cout << "Last number of the CPU: ";
                        cin >> lastnum;
                        lastnum = lastnum / 10;
                        solution = solution + lastnum;
                }
        }
        cout << "CPU Score: " << solution << endl;
        return 0;
}