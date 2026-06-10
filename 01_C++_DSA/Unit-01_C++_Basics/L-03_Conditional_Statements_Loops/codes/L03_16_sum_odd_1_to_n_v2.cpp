#include <iostream>
using namespace std;

int main() {
    //Sum of all odd no. 1 to N
    // with for loop + Conditional statement
    int n;
    cout << "Enter N : ";
    cin >> n;

    int oddSum = 0;

    for (int i = 1; i<=n; i++){
        if (i%2 !=0){
            cout<< i << " ";
            oddSum += i;
        }
    }
    cout << endl;
    cout << "Sum of all odd no. 1 to " << n << " = " << oddSum << endl;
    return 0;
}