

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
		arr[i] = RandomNumber(1, 99);
	}
	return arr;
}

void printArray(int* arr, int size) {

	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool searchNumberInarray(int* array,int  value,int size)
{

	for (int i = 0; i < size; i++)
	{
		if (array[i] == value) return true;
	}
	return false;
	
}
void printResult(bool status)
{
	if (status) cout << "congrts you array has been number :-}";
	else  cout << "Oooooops you number not dounded in array :-{";
}

int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int size = readNumberFromUser("please enter size array forom 1 to 100 : ");
	int* array = fillArray(size);
	

	printArray(array, size);

	int value = readNumberFromUser("please enter number for search : ");


	cout << "number you are looking is : " << value << endl;

	printResult(searchNumberInarray(array, value, size));
	
	return 0;
}
