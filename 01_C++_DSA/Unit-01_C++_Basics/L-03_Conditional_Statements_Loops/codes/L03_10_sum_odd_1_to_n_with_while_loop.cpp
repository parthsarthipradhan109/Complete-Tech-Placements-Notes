#include <iostream>
using namespace std;

int main() {
    // Sum of all odd no. 1 to N
    // with while loop
    int n;
    cout << "Enter N : ";
    cin >> n;

    int oddSum = 0;
    int i = 1;
    while (i<=n) {
        if (i%2 !=0) {
            cout << i << " ";
            oddSum += i;
        }
        i++; // <-- if ke bahar nikalo warna infinite loop ban jayega
    }
    cout << endl;
    cout << "Sum of all odd no. 1 to "<< n << " = " << oddSum << endl;
    return 0;
}