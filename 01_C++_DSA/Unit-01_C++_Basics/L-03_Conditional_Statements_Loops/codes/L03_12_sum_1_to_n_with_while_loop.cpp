#include <iostream>
using namespace std;

int main() {
    // Sum of no. from 1 to n
    int n;
    cout << "Enter n = ";
    cin>> n;

    int sum = 0;
    int i=1; // Initialization
    while (i <= n) { // condition
        sum +=i ;
        i++; // updation
    }
    cout << "sum of no. from 1 to " << n << " = " << sum << endl;

    return 0;
}