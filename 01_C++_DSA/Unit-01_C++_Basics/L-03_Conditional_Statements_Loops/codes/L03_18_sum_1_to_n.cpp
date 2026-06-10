#include <iostream>
using namespace std;

int main() {
    // Sum of no. from 1 to n
    int n;
    int sum = 0;
    cout << "Enter n = " ;
    cin>> n;

    for (int i = 1; i<=n ; i++){
        sum = sum + i;
    }
    cout << "sum of no. from 1 to " << n << " = "<< sum << endl;

    return 0;
}