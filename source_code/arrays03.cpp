// arrays03.cpp
//

#include <iostream>
using namespace std;

int main() {
	int memarray[] = { 1, 2, 3, 4 };


	cout << (int) &memarray[0] << endl;
	cout << (int) &memarray[1] << endl;
	cout << (int) &memarray[2] << endl;
	cout << (int) &memarray[3] << endl;


	return 0;
}



/*

#include <iostream>

int main() {
	int arr[] = {1, 2, 3, 4};


	std::cout << (int) &arr[0] << std::endl;
	std::cout << (int) &arr[1] << std::endl;
	std::cout << (int) &arr[2] << std::endl;
	std::cout << (int) &arr[3] << std::endl;


	return 0;
}
*/
