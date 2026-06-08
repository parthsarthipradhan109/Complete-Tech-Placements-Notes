#include <iostream>
using namespace std;

int main(){
    // Type Casting [explicit] Big to small
    double Price = 100.99;
    
    int NewPrice = (int)Price; // double ko int ke liye (int) lagaya
    cout << "Price: " << Price << endl; // output: Price: 100.99
    cout << "New Price: " << NewPrice << endl; // output: New Price: 100
    
    return 0;
}