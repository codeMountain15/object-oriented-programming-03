// switch01.cpp

#include <iostream>
using namespace std;

int main() {
    
    int option;

    cout << "This is the main menu: \n";
    cout << "Enter 1 for starting the process\n";
    cout << "Enter 2 for changing the avatar\n";
    cout << "Enter 3 for exit\n";

    cin >> option;

    switch (option) {
    case 1:
        cout << "The process is starting...\n";
        break;
    case 2:
        cout << "Choose your avatar\n";
        break;
    case 3:
        cout << "Exiting the program";
        break;
    }

    return 0;
}
