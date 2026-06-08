#include <iostream>
using namespace std;

int main(){
    // Operators
    // 1. Arithmetic Operators
    int a = 10, b = 5;
    
    cout << "For a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl; // Addition
    cout << "a - b = " << (a - b) << endl; // Subtraction
    cout << "a * b = " << (a * b) << endl; // Multiplication
    cout << "a / b = " << (a / b) << endl; // Division
    cout << "a % b = " << (a % b) << endl; // Modulus -> gives the remainder of the division
    
    // In division
    int c = 7, d = 3;
    cout << "For c = " << c << ", d = " << d << endl;
    cout << "c / d = " << (c / d) << endl; // Integer division, result is 2
    
    // For Precise Division
    int e = 7;
    double f = 3;
    cout << "For e = " << e << ", f = " << f << endl;
    cout << "e/f = " << (e / f) << endl; // Result is 2.33333, because f is a double
    
    // For Precise Division through type casting
    cout << "7/3=" << (7/ (double) 3) << endl; // Result is 2.33333, because f is cast to double
    
    return 0;
}