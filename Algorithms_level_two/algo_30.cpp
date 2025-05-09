

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
		arr[i] = RandomNumber(0, 99);
	}
	return arr;
}

void printArray( int* arr, int size) {

	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";		
	}
	cout << endl;

}


int* sumArrays(int* array,int* array2,int size)
{
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = array[i] + array2[i];
	}
	return arr;
}

int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int size = readNumberFromUser("please enter size array forom 1 to 100 : ");
	int* array = fillArray(size);
	int* array2 = fillArray(size);
	int* array3 = sumArrays(array, array2, size);

	printArray(array, size);
	printArray(array2, size);
	printArray(array3, size);
	return 0;
}
