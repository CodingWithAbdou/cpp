

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


int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}


int* fillArray(int size)
{
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}
	return arr;
}

void printArray( int* arr, int size) {

	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";		
	}
	cout << endl;

}



bool checkIfArrayHasNumber(int number , int* array ,int size){

	bool status = false;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == number) status =  true;
	}

	if (!status)
		array[size] = number;

	return status;
}

int* reverseArray(int* array,int size)
{
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = array[size - 1  - i ];
	
	}
	return arr;
}

int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int size = readNumberFromUser("please enter size array forom 1 to 100 : ");
	int* array = fillArray(size);
	
	int* array2 = reverseArray(array, size);

	printArray(array, size);
	cout << "after safful : \n";
	printArray(array2, size);
	return 0;
}
