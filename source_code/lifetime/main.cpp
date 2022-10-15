// lifetime/main.cpp
//

#include <iostream> 
using namespace std;

int func();

int main() {

    cout << "Value of num from main() - 1st call: " << func() << "\n\n";
    cout << "Value of num from main() - 2nd call: " << func() << "\n\n";
    cout << "Value of num from main() - 3rd call: " << func() << "\n\n";

    return 0;
}
