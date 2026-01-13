#include <iostream>
using namespace std;

int main() {
    int number = 42;           // Normal integer variable
    int *ptr = &number;        // Pointer storing the address of 'number'

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Pointer ptr points to: " << ptr << endl;
    cout << "Value via pointer *ptr: " << *ptr << endl;

    // Changing value using pointer
    *ptr = 100;
    cout << "\nAfter modifying via pointer:" << endl;
    cout << "Value of number: " << number << endl;

    // Pointer with array
    int numbers[5] = {10, 20, 30, 40, 50};
    int *arrPtr = numbers; // points to first element

    cout << "\nArray elements via pointer:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << *(arrPtr + i) << " "; // pointer arithmetic
    }
    cout << endl;

    return 0;
}