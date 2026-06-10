#include<iostream>
using namespace std;

int main() {
    // Even or Odd Number Checker
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "n is even." << endl;
    } else {
        cout << "n is odd." << endl;
    }

    return 0;
}