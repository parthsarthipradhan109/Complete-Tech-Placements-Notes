#include <iostream>
using namespace std;

int main() {
    //Sum of all odd no. 1 to N
    // Only with for loop
    int n;
    cout << "Enter N : ";
    cin >> n;

    int oddSum = 0;

    for (int i = 1; i<=n; i+=2){
        cout << i << " ";
        oddSum += i;
    }
    cout << endl;
    cout << "Sum of all odd no. 1 to " << n << " = " << oddSum << endl;
    return 0;
}