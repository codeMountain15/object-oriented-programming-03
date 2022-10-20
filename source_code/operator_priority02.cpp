// operator_priority02.cpp
//

#include <iostream>
using namespace std;

int main() {
        
    int a, b, c = 3, d = 5, e = 4;

    a = b = c;  // -> a = (b = c)

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    
    c = (d > e) ? 1 : e;
    cout << "new c = " << c << endl;


    return 0;
}
