

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
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		 sum += arr[i];
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "avg  number is  : " << sum / size;
}

void checkRepeatAndPrintArray()
{}

int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int size = readNumberFromUser("please enter size array forom 1 to 100 : ");
	int* array = fillArray(size);

	printArray(array , size);


	return 0;
}
