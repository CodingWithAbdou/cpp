

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

void printReverserNumber(int number , int unique)
{
	string number_s = to_string(number);
	int counter = 0;

	for (int i = number_s.size(); i > 0 ; i--) {
		if (number % 10 == unique) counter++;
		number = number / 10;
	}
	cout << "number "<< unique <<" reapted : " << counter;
	
	
}


int main()
{
	
	int number = readPositiveNumber("pleas Enter Postive number ");
	int unique = readPositiveNumber("pleas Enter  number you want check ");
	printReverserNumber(number , unique);

	return 0;
}

