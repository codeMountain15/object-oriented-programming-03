// binary_operators01.cpp
//

#include <iostream>
using namespace std;

int main() {
    
    // a1 = 2 (00000010)
    // a2 = 7 (00000111)
    
    int a1 = 2, a2 = 7;

    cout << "a1 = " << a1 << endl << "a2 = " << a2 << "\n\n";
    
    // operator & -> AND
    // what will be printed?
    cout << "a1 & a2 = " << (a1 & a2) << endl;

    // operator | -> OR
    // what will be printed?
    cout << "a1 | a2 = " << (a1 | a2) << endl;

    // operator ^ -> XOR
    // what will be printed?
    cout << "a1 ^ a2 = " << (a1 ^ a2) << endl;

    // operator ~ -> complement
    // what will be printed?
    cout << "~a1 = " << (~a1) << endl;

    // what will be printed?
    cout << "a1 << 1" << " = " << (a1 << 1) << endl;

    // what will be printed?
    cout << "a2 >> 1 " << "= " << (a2 >> 1) << endl;

    return 0;
}
