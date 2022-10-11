// structs01.cpp
//

#include <iostream>
#include <string>

using namespace std;

struct {
    int vathmos_ergasias;
    int vathmos_ergastiriou;
    int vathmos_graptou;
    string geniki_eikona;
} axiologisi_oop;

int main() {
    
    axiologisi_oop.vathmos_ergasias = 2;
    axiologisi_oop.vathmos_ergastiriou = 1;
    axiologisi_oop.vathmos_graptou = 3;
    axiologisi_oop.geniki_eikona = "Koukouroukou";

    cout << "The mark from my project is: " << axiologisi_oop.vathmos_ergasias << endl;
    cout << "The mark from the lab test is: " << axiologisi_oop.vathmos_ergastiriou << endl;
    cout << "The mark from the final test is: " << axiologisi_oop.vathmos_graptou << endl;

    cout << "Teacher says that I am " << axiologisi_oop.geniki_eikona << " as a student" << endl;

    return 0;
}
