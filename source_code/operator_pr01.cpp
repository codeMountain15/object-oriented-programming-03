// operator_pr01.cpp

#include <iostream>

using namespace std;

int main()
{
    int a, b = 1, c , d = 2;
   
    a = ++b;
    c = d++;

    cout << a << endl << b << endl;   // a=2, b=2
    cout << c << endl << d << endl;   // c=2, d=3
  
    return 0;
}
