#include <iostream>

using namespace std;

extern int my_var;

void f();


int main()
{
   cout << "print my_var from main.cpp " << my_var << endl; // prints 0

    f();

   return 0;
}
