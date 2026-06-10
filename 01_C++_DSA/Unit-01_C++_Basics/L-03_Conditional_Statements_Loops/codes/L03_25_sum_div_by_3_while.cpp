#include <iostream>
using namespace std;

int main() {
    // Sum of no. from 1 to n which are divisible by 3
    int n;
    cout << "Enter n = ";
    cin>> n;

    // with while loop
    int sum = 0;
    int i = 1;
    while (i<=n){
        if (i%3 == 0){
            cout << i << " ";
            sum+= i;
        }
        i++;
    }

    cout << endl;
    cout << "sum of no. from 1 to "<< n << " which are divisible by 3 = "<< sum ;
    cout << endl;
    return 0;
}