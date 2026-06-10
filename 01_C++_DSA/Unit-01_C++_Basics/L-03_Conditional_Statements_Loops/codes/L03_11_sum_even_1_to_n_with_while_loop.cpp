#include <iostream>
using namespace std;

int main() {
    // Sum of all even no. 1 to N
    // with while loop
    int n;
    cout << "Enter N : ";
    cin >> n;

    int evenSum = 0;
    int i =1;
    while (i<=n) {
        if (i%2 ==0) {
            cout << i << " ";
            evenSum +=i;
        }
        i++;
    }
    cout << endl;
    cout << "Sum of all even no. 1 to "<< n << " = " << evenSum << endl;
    return 0;
}