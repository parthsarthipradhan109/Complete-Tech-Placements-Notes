#include <iostream>
using namespace std;

int main(){
    // Operators
    // 3. Logical Operators
    bool x = true, y = false;
    
    cout << "For x = " << x << ", y = " << y << endl;
    
    cout << "x || y = " << (x || y) << endl; // Logical OR
    cout << "x && y = " << (x && y) << endl; // Logical AND
    cout << "!(x) = " << !(x) << endl; // Logical NOT
    
    cout << "For Example" << endl; // For Example
    cout << "(5>3) || (2<4) = " << ((5>3) || (2<4)) << endl; // true || true = true
    cout << "(5>3) || (2>4) = " << ((5>3) || (2>4)) << endl; // true || false = true
    
    cout << "(5>3) && (2<4) = " << ((5>3) && (2<4)) << endl; // true && true = true
    cout << "(5>3) && (2>4) = " << ((5>3) && (2>4)) << endl; // true && false = false
    
    cout << "!(5>3) = " << !(5>3) << endl; // !true = false
    cout << "!(2>4) = " << !(2>4) << endl; // !false = true
    
    return 0;
}
