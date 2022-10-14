// vectors01.cpp
//

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a;
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    for (vector<int>::iterator itr = a.begin(); itr != a.end(); itr++)
        cout << *itr << endl;

    return 0;
}
