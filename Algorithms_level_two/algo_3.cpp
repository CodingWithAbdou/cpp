

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

void printResult(enPerfectOrNot value , int number) {

	cout << "you number: " << number;
	if (value == enPerfectOrNot::Perfect) cout << " is Perfect";
	else cout << " is Not perfect";
	
}


int main()
{
	
	int number = readPositiveNumber("pleas Enter Postive number ");
	printResult(checkNumberPerfectOrNot(number) , number);

	return 0;
}

