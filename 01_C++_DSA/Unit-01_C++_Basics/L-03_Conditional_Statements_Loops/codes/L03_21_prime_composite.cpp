#include <iostream>
using namespace std;

int main() {
    //Check if a no. is Prime or Composite
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Guard Clause: Handle edge cases first
    if (n <= 1) {
        cout << n << " is neither Prime nor Composite" << endl;
        return 0;
    }

    // Main Logic: Check for factors from 2 to n-1
    bool isPrime = true;
    for (int i = 2; i <= n-1; i++) { // yahan i*i<=n bhi likh sakte hai
        if (n % i == 0) {
            isPrime = false; // Factor found // Composite number
            break;           // No need to check further
        }
    }

    // Output
    if (isPrime) {
        cout << n << " is a Prime Number" << endl;
    } else {
        cout << n << " is a Composite Number" << endl;
    }

    return 0;
}