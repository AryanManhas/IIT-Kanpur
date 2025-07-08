// Write a Program to print student detail roll and cgpa and 
// node: initilize roll and cgpa using construtor and print this detail via display function.
// roll and cgpa must be data member of btech class



#include<iostream>
using namespace std;

class BTech {
    int roll;
    float cgpa;

public:
    // Constructor to initialize roll and cgpa
    BTech(int r, float c) {
        roll = r;
        cgpa = c;
    }

    // Display function
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    int r;
    float c;

    cout << "Enter Roll: ";
    cin >> r;

    cout << "Enter CGPA: ";
    cin >> c;

    // Create object using constructor
    BTech student(r, c);

    // Display the details
    student.display();

    return 0;
}
