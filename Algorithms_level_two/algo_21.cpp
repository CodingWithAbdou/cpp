

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
	} while (number <= 0);

	return number;
}


int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void printCodes(int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 20; j++)
		{

			if (j != 0 && j % 5 == 0) cout << "-";
			cout << (char)RandomNumber(65, 90);
		}
		cout << endl;
	}
}

int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int counter = readNumberFromUser("please enter number : ");
	printCodes(counter);

	return 0;
}
