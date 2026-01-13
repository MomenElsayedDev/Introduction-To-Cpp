#include <iostream>
using namespace std;

int main() {
    // Variables
    string name;
    int age;
    float height;

    // Output: Ask user for input
    cout << "Enter your name: ";
    cin >> name; // reads a single word

    cout << "Enter your age: ";
    cin >> age; // reads integer

    cout << "Enter your height in cm: ";
    cin >> height; // reads float

    // Output: Display user input
    cout << "\n--- User Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " cm" << endl;

    // Reading multiple inputs in one line
    string firstName, lastName;
    cout << "\nEnter your first and last name: ";
    cin >> firstName >> lastName;
    cout << "Full Name: " << firstName << " " << lastName << endl;

    return 0;
}