

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


void printArray(int* arr, int size) {

	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

}

bool checkIfArrayPalindrom(int array[5], int size)
{
	for (int i = 0; i < size; i++) {
		if (array[i] != array[size - 1 - i]) return false;
	}
	return true;
}

void printResult(bool status)
{
	cout << "Your array Is ";
	if (status) cout << " Palindrom \n";
	else cout << "not Palindrom" << endl;
}
int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int array[5] = {30 , 10 , 20 , 10 ,30 };
	

	printArray(array, 5);

	
	printResult(checkIfArrayPalindrom(array, 5));
	
	
	return 0;
}
