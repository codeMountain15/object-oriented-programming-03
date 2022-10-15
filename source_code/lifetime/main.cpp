// lifetime/main.cpp
//

#include <iostream> 
using namespace std;

int func();

int main() {

    func();
    cout << "Value of num from main() - 1st call: " << func() << "\n\n";

    func();
    cout << "Value of num from main() - 2nd call: " << func() << "\n\n";

    func();
    cout << "Value of num from main() - 3rd call: " << func() << "\n\n";

     {
        int num = 200;
        cout << endl << num << endl;
    }
    
    return 0;
}
