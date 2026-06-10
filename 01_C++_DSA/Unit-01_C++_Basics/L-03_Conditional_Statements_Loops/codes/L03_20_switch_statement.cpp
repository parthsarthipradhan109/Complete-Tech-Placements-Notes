#include <iostream>
using namespace std;

int main() {
    // Switch Statement
    char grade;
    cout << "Enter grade A/B/C: ";
    cin >> grade;

    switch(grade) {
        case 'A':
            cout << "Excellent" << endl;
            break; // break zaroori hai warna fall-through hoga
        case 'B':
            cout << "Good" << endl;
            break;
        case 'C':
            cout << "Average" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }
    return 0;
}