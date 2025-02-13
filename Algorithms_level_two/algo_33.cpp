

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

string  getGenratedCode()
{
	string code = "";
	for (int i = 0; i < 16; i++)
	{
		if (i % 4 == 0 && i != 0) code += "-";
		code += (char)RandomNumber(65, 90);
	}

	return code;
}

string* fillArray(int size)
{
	string* arr = new string[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = getGenratedCode();
	}
	return arr;
}

void printArray(string* arr, int size) {

	for (int i = 0; i < size; ++i) {
		cout <<"array number " << i + 1 << " : " << arr[i] << " " << endl;
	}

}



int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int size = readNumberFromUser("please enter size array forom 1 to 100 : ");
	string* array = fillArray(size);
	

	printArray(array, size);
	return 0;
}
