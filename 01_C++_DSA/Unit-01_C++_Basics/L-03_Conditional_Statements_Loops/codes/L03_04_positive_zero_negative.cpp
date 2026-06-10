#include<iostream>
using namespace std;

int main() {
    // Conditional Statement
    // if - else if - else
    int n;
    cout << "n = ";
    cin >> n;
    if (n > 0) {
        cout << "n is Positive" << endl;
    } else if (n == 0) {
        cout << "n is Zero" << endl;
    } else {
        cout << "n is Negative" << endl;
    }

    return 0;
}