#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;

    // if statement
    if (score >= 90) {
        cout << "Grade: A" << endl;
    }
    // else if statement
    else if (score >= 75) {
        cout << "Grade: B" << endl;
    }
    else if (score >= 50) {
        cout << "Grade: C" << endl;
    }
    // else statement
    else {
        cout << "Grade: F" << endl;
    }

    // switch statement
    int day;
    cout << "\nEnter day number (1-7): ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day!" << endl;
    }

    return 0;
}
