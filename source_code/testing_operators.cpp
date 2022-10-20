// testing_operators.cpp
//

#include <iostream>
using namespace std;

int main()
{
    int x = 2, y = 5;
    (x & y) ? cout << "true\n" : cout << "false\n";
    !(x < y) ? cout << "true\n" : cout << "false\n";

    return 0;
}
