// WAP to take name, roll, and cgpa of two studetns and print it.

// note:
//     take data using getdata() function and print it using putdata() function.

#include <iostream>

using namespace std;

class Student {

private:

  string name;

  int roll;

  float cgpa;

public:

  // Function to take input

  void getData() {

    cout << "Enter name: ";

    cin >> ws; // To consume any leftover newline character

    getline(cin, name);

    cout << "Enter roll number: ";

    cin >> roll;

    cout << "Enter CGPA: ";

    // cin >> cgpa;

  }

  // Function to display data

  void putData() {

    cout << "\nName: " << name << endl;

    cout << "Roll Number: " << roll << endl;

    cout << "CGPA: " << cgpa << endl;

  }

};

int main() {

  Student s1, s2;

  cout << "Enter details for student 1:\n";



  s1.getData();

  cout << "\nEnter details for student 2:\n";

  s2.getData();

  cout << "\nDetails of student 1:";

  s1.putData();

  cout << "\nDetails of student 2:";

  s2.putData();

  return 0;

}