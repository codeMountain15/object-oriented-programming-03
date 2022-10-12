// arrays02.cpp
// two dimensions

#include <iostream>

using namespace std;

int main() {
    int letters[2][10] = {
      { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
      { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }
    };

    cout << sizeof(letters);    // 80
   
    return 0;
}
