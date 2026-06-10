#include <iostream>
using namespace std;

int main() {
    // Ternary Statement (ek statement me if-else)
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << (n>=0 ? "Positive" : "Negative") << endl;

    return 0;
}