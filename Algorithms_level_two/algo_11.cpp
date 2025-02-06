

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int readPositiveNumber(string msg) {
	int number;
	do
	{
		cout << msg << endl;
		cin >> number;
	} while (number < 1);

	return number;
}


int reveseNumber(int number)
{
	int newNumber = 0;
	while (number > 0)
	{
		int reverseNumber = (number % 10) ;
		newNumber = (reverseNumber + newNumber) * 10;
		number = number / 10;
	}

	return newNumber / 10;
}


bool checkIfNumberPolindrome(int a, int b)
{
	return a == b;
}

void printNumber(bool status)
{
	
	if (status) cout << "number is Polindrome";
	else cout << "number is not Polindrome";
}


int main()
{
	
	int number = readPositiveNumber("pleas Enter Postive number ");
	printNumber(checkIfNumberPolindrome(reveseNumber(number) , number));

	return 0;
}

