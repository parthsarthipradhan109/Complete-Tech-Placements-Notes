#include <iostream>
using namespace std;

int main(){
    // Type Conversion [Implicit] Small to Large
    char grade = 'A';
    
    int Value = grade;
    cout << "The value of grade is: " << Value << endl; // output: The value of grade is: 65
    // yahan 65 is the ASCII value of character 'A'
    
    return 0;
}

// Full form of ASCII is American Standard Code for Information Interchange