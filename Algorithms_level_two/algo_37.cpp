

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int readNumberFromUser(string msg)
{
	int number;
	do
	{
		cout << msg << endl;
		cin >> number;
	} while (number <= 0 || number > 100);

	return number;
}


bool readBoolFromUser(string msg)
{
	int number;
	do
	{
		cout << msg << endl;
		cin >> number;
	} while (number > 1 || number < 0);

	if (number) return true;
	return false;
}



void printArray(int* arr, int size) {

	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

}


void  fillArray(int array[100] ,int index , int number)
{

	array[index] = number;
}

void startPickNumbers()
{
	int index = 0;
	int array[100];

	do
	{
		int number = readNumberFromUser("please enter number : ");
		fillArray(array , index , number);
		index++;
	} while (readBoolFromUser("Do you want add number if yes enter [1] if no enter 0"));


	printArray(array, index );
}

int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));


	startPickNumbers();
	
	
	return 0;
}
