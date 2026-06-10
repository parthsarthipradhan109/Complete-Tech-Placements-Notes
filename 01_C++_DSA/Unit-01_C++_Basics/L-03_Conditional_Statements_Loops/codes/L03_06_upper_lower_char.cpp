#include<iostream>
using namespace std;

int main() {
    // Uppercase and lowercase character with ASCII values
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 97 && ch <= 122) { // ASCII value of 'a' is 97 and 'z' is 122
        cout << "lowercase" << endl;
    } else {
        cout << "uppercase" << endl; // ASCII value of 'A' is 65 and 'Z' is 90
    }

    return 0;
}
// Full form of ASCII is American Standard Code for Information Interchange.