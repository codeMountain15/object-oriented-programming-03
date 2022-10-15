// lifetime/staticv.cpp
//

#include <iostream> 
using namespace std;

static int num = 1;

int func() {    
    cout << "Value of num from func(): " << num << "\n";

    return num++;
}
