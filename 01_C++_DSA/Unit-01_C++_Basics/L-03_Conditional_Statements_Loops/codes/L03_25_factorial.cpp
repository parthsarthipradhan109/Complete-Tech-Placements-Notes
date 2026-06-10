#include <iostream>
using namespace std;

int main() {
    // Print Factorial of a no. N
    int n;
    cout << "Enter n = ";
    cin >> n;

    // Guard Clauses: Handle edge case first
    if(n<0){
        cout << "Factorial of -ve no. doesn't Exist ";
        return 0;
    }
    if (n==0){
        cout << "Factorial of 0 = 1";
        return 0;
    }

    // Main Logic: 1 se start karke n tak multiply karo
    int factorial = 1;
    for (int i = 1; i<=n ; i++){ // n<=6 tak hi use karo
        factorial *= i;
    }

    //Output
    cout << "Factorial of " << n << " = " << factorial;
    cout << endl;
    return 0;
}