

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

void printReverserNumber(int number)
{
	string number_s = to_string(number);

	int count = number_s.size() - 1;

	for (int i = count; i >= 0 ; i--) {
		cout << number_s[i] << endl;
	}
	
	
}


int main()
{
	
	int number = readPositiveNumber("pleas Enter Postive number ");

	printReverserNumber(number);

	return 0;
}

