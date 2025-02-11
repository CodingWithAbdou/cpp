

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

	bool isEmpty = true;
	for (int i = 0; i < size; ++i) {
		if (arr[i] > 0) {
			cout << arr[i] << " ";
			isEmpty = false;
		}
	}
	if (isEmpty) cout  << "all number is not Prime :/";
	cout << endl;

}

bool checkIfNumberPrime(int number) {
	int halfNumber = round(number / 2);

	for (int i = 2; i < halfNumber; i++)
	{
		if (number % i == 0) return false;
	}

	return true;
}

int* copyArray(int* array, int size)
{
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{

		if (checkIfNumberPrime(array[i])) {
			arr[i] = array[i];
		}
	}
	return arr;
}

int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int size = readNumberFromUser("please enter size array forom 1 to 100 : ");
	int* array = fillArray(size);
	int* array2 = copyArray(array , size);

	printArray(array , size);

	printArray(array2, size);
	return 0;
}
