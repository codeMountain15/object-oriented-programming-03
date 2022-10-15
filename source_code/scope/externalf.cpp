// scope/externalf.cpp
//

#include <iostream>

using namespace std;

int my_var = 0;

void f(){

     int my_var;

     my_var = 1;
     cout << "print my_var from 1st externalf.cpp " << ::my_var << endl;       // prints 0

     {
        int my_var;
        my_var = 2;
        cout << "print my_var from internal externalf.cpp " << my_var << endl; // prints 2
     }

     cout << "print my_var from 2nd externalf.cpp " << my_var << endl;         // prints 1
 }
