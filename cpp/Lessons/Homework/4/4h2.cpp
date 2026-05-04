// Chapter 4 Homework 1

#include <iostream>
#include <string>

int main() {
        using namespace std;
        string nameFirst;
        string nameLast;
        string grade;
        int age;

        cout << "What is your first name? ";
        cin >> nameFirst;
        cout << "What is your last name? ";
        cin >> nameLast;
        cout << "What letter grade do you deserve? ";
        cin >> grade;
        cout << "What is your age? ";
        cin >> age;

        if(grade == "A") {
                grade = "B";
        } else if(grade == "B") {
                grade = "C";
        } else if(grade == "C") {
                grade = "D";
        } else if(grade == "D") {
                grade = "E";
        } else if(grade == "E") {
                grade = "F";
        }

        cout << "Name: " << nameLast << ", " << nameFirst << endl;
        cout << "Grade: " << grade << endl;
        cout << "Age: " << age << endl;
        return 0;
}