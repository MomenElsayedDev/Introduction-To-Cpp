#include <iostream>
using namespace std;

// Function without parameters, no return
void greet() {
    cout << "Hello! Welcome to C++ Functions." << endl;
}

// Function with parameters, no return
void printSum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

// Function with parameters and return value
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Calling function without parameters
    greet();

    // Calling function with parameters
    printSum(5, 10);

    // Calling function with return value
    int result = multiply(4, 3);
    cout << "Multiply Result: " << result << endl;

    return 0;
}