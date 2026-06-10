#include <iostream>
using namespace std;

int main() {
    // nested Loops
    // Loops inside Loops
    int n;
    cout << "Kitna line chahiye, n = ";
    cin >> n;
    int m;
    cout << "Har ek line mein kitne star chahiye, m = ";
    cin >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}