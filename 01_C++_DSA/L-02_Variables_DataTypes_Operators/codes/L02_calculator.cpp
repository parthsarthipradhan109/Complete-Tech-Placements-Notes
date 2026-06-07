#include <iostream>
using namespace std;

int main(){
    //Calculator
    int a, b;
    
    cout << "Enter a: ";
    cin >> a ;
    cout << "Enter b: ";
    cin >> b ;
    
    cout << "Sum = " << ( a + b ) << endl;
    cout << "Difference = " << ( a - b ) << endl;
    cout << "Product = " << ( a * b)<< endl;
    cout << "Division = " << ( a / (double)b)<< endl;
    // Type casting to double for accurate division result
    
    cout << "Modulus = " << (a % b) << endl;
    // Modulus operator only works with integers
    
    return 0;
}
