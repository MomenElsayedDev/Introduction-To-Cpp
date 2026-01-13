#include <iostream>
using namespace std;

// Class definition
class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Method to display info
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Setter (Encapsulation example)
    void setAge(int a) {
        if(a > 0)
            age = a;
    }
};

int main() {
    // Create objects
    Student student1("Moamen", 25);
    Student student2("Ahmed", 30);

    // Call methods
    student1.displayInfo();
    student2.displayInfo();

    // Modify age using setter
    student1.setAge(26);
    cout << "\nAfter updating age:" << endl;
    student1.displayInfo();

    return 0;
}