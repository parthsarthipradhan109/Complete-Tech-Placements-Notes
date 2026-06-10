#include <iostream>
using namespace std;

int main() {
    // Break Statement
      // Chocolate dhoondhne ka game
    cout << "Boxes check kar rahe hain..." << endl;
    
    for(int box = 1; box <= 10; box++) {  // 10 boxes check
        cout << "Box " << box << " khola" << endl;
        
        if(box == 6) {  // Box 6 me chocolate
            cout << "Chocolate mil gayi! 🎉" << endl;
            break;  // Loop se bahar nikal
        }
        
        cout << "Khali hai, next box" << endl;
    }
    
    cout << "Game khatam, ghar chalo" << endl;
    return 0;
}