// structs02.cpp : struct as a new data type
//

#include <iostream>
#include <string>

using namespace std;

struct bird {
    string name;
    bool hunter;
    bool flying;
};

int main() {
    
    bird chicken, eagle, robin;

    chicken.name = "Koko";
    chicken.hunter = false;
    chicken.flying = false;

    eagle.name = "Mitsos";
    eagle.hunter = true;
    eagle.flying = true;

    robin.name = "Takis";
    robin.hunter = false;
    robin.flying = true;

    cout << "I have three bird friends: " << endl << chicken.name << endl << eagle.name << endl << robin.name;

    return 0;
}
