#include <iostream>
using namespace std;

int main() {

    // For loop: print numbers 1 to 5
    cout << "For loop (1 to 5): ";
    for(int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // While loop: print numbers 1 to 5
    cout << "While loop (1 to 5): ";
    int j = 1;
    while(j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // Do-while loop: print numbers 1 to 5
    cout << "Do-While loop (1 to 5): ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while(k <= 5);
    cout << endl;

    // Nested loops: multiplication table 1-3
    cout << "\nMultiplication Table (1-3):" << endl;
    for(int x = 1; x <= 3; x++) {
        for(int y = 1; y <= 3; y++) {
            cout << x * y << "\t";
        }
        cout << endl;
    }

    return 0;
}
