#include <iostream>
using namespace std;

int main(){
    // Input in C++
    
    int Age;
    cout << "Enter the Age: "; // yahaan pe user se input lene ke liye prompt kar rahe hain
    cin >> Age; // yahaan pe user ke input ko store kar rahe hain
    cout << "Your Age is: " << Age << endl; // yahaan pe user ke input ko display kar rahe hain
    
    double Price;
    cout << "Enter the Price: "; // yahaan pe user se input lene ke liye prompt kar rahe hain
    cin >> Price; // yahaan pe user ke input ko store kar rahe hain
    cout << "Your Entered Price = " << Price << endl; // yahaan pe user ke input ko display kar rahe hain
    
    return 0;
}

// cin & cout are not functions, they are Global Objects of iostream library.
