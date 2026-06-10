#include <iostream>
using namespace std;

int main() {
    //Break Statement
    int n = 50;
    int sum = 0 ;

    for (int i=1; i<= n ; i++){
        cout << i; // pehle no. print karo
        sum += i;
        if (i==5){
            cout << " = "; // i=5 hai toh "=" lagao
            break; // 1+2+3+4+5 = 15
        } else {
            cout<< " + "; // warna "+" lagao
        }
    }
    cout << sum << endl;
    return 0;
}