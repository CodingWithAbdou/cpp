

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

bool checkIfNumberPrime(int number) {
	int halfNumber = round(number / 2);

	for (int i = 2; i < halfNumber; i++)
	{
		if (number % i == 0) return false;
	}

	return true;
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

bool checkNumberDontRepeatedInNewArray(int array[100], int number, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == number) return true;
	}

	return false;
}




void fillArrayWithRandomNumbers(int array[100], int size)
{
	for (int i = 0; i < size;)
	{
		addNumberToArray(array, i, RandomNumber(-100 ,100 ));
	}
}

int getHowManyNigativeNUmber(int array[100], int size)
{
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0) counter++;
	}
	return counter;
}

int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int array[100];
	int size = readNumberFromUser("please enter number : ");

	fillArrayWithRandomNumbers(array, size);

	int PositiveCount = getHowManyNigativeNUmber(array, size);
	

	printArray(array, size);

	cout << endl << "NIgative number  Count is : " << PositiveCount << endl;


	
	
	return 0;
}
