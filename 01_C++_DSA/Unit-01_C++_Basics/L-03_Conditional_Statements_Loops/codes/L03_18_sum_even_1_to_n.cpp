#include <iostream>
using namespace std;

int main() {
    //Sum of all even no. 1 to N
    // with for loop
    int n;
    cout << "Enter N : ";
    cin >> n;

    int evenSum = 0;

    for (int i = 1; i <= n; i++){
        if (i%2 ==0){
            cout<< i << " ";
            evenSum +=i;
        }
    }

    cout << endl;
    cout << "Sum of all even no. 1 to "<< n << " = " << evenSum << endl;
    return 0;
}