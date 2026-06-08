#include <iostream>
using namespace std;

int main(){
    // Unary operator
    int a = 10;
    
    int b = ++a; // Pre increment : first a ko increment karo then b ko assign karo
    cout << "a = " << a << endl; // 11
    cout << "b = " << b << endl; // 11
    
    // Similarly int b = a-- & --a works as post decrement and pre decrement respectively
    
    return 0;
}