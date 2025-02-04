

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


enum enPerfectOrNot { Perfect = 1, NotPerfect = 2 };

int readPositiveNumber(string msg) {
	int number;
	do
	{
		cout << msg << endl;
		cin >> number;
	} while (number < 1);

	return number;
}


enPerfectOrNot checkNumberPerfectOrNot(int number) {
	int sum = 0;

	for (int i = 1; i < number; i++) {
		if (number % i == 0) sum += i;
	}

	if (number == sum)	return enPerfectOrNot::Perfect;
	
	return enPerfectOrNot::NotPerfect;
}

void printNumberPerfectOrNot(enPerfectOrNot value , int number) {

	if (value == enPerfectOrNot::Perfect) cout  << number <<  " is Perfect" << endl;
}

void printAllPerfectNumberFromOneTo_N(int number)
{
	for (int i = 1; i <= number; i++) {
		printNumberPerfectOrNot(checkNumberPerfectOrNot(i), i);
	}
}


int main()
{
	
	int number = readPositiveNumber("pleas Enter Postive number ");

	printAllPerfectNumberFromOneTo_N(number);

	return 0;
}

