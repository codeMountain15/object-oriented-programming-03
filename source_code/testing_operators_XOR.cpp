// testing_operators_XOR.cpp
//

#include <iostream>
using namespace std;

int main()
{
    int x = 2, y = 5;
    y %= x;
    y ^= 1;

    cout << y;

    return 0;
}
