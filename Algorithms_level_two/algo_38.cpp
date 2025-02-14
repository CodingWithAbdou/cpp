

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

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void printArray(int* arr, int size) {

	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

}


void  addNumberToArray(int array[100] ,int& index , int number)
{
	array[index] = number;
	index++;
}


int  copyArray(int array[100], int array2[100],int size)
{
	int counter = 0;

	while (array[counter] % 2 != 0)
	{
		addNumberToArray(array2, counter, array[counter]);
	}

	return counter;
}

void fillArrayWithRandomNumbers(int array[100], int size)
{
	for (int i = 0; i < size;)
	{
		addNumberToArray(array, i, RandomNumber(1 ,100 ));
	}
}

int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int array[100] , array2[100];
	int size = readNumberFromUser("please enter number : ");

	fillArrayWithRandomNumbers(array, size);


	int size2 = copyArray(array, array2, size);
	

	printArray(array, size);
	if (size2)printArray(array2, size2);
	else cout << "ther is no anny number is ood";

	
	
	return 0;
}
