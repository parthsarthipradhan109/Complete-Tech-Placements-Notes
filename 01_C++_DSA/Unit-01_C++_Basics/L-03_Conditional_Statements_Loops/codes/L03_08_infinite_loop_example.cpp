#include <iostream>
using namespace std;

int main() {
    // Infinite loop example
    int n=50;
    int i = 1;

    while (i <= n) {
        cout << i << " "; // 1 1 till Ctrl + C
        //i++; // <-- update Missing = Infinite loop
    }
    return 0;
}

// Fix: Uncomment i++ for 1 2 3...50