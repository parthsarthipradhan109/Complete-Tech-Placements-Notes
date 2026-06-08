#include <iostream>
using namespace std;

int main(){
    // Unary operator
    int a = 10;
    
    int b = a++; // Post increment : first b ko assign karo then a ko increment
    cout << "b = " << b << endl; // 10
    cout << "a = " << a << endl; // 11
    
    return 0;
}