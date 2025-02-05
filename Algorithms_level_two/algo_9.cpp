

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

int getRepeatNumberWithUnique(int number, int unique)
{
	int counter = 0;
	for (int i = to_string(number).size(); i > 0; i--) {		
		if (number % 10 == unique) counter++;
		number = (number / 10);
		
	}

	return counter;

}

bool checkIfPrintReaslutBefore(string prev_number,int number) {
	for (int i = 0; i <= prev_number.size(); i++) {
		if (prev_number[i] == number) return false;
	}	
	return true;
}


void printReverserNumber(int number)
{
	string number_s = to_string(number);
	int vesion = number;
	string prev_number = "";

	for (int i = number_s.size() - 1; i >= 0; i--) {	

		if (checkIfPrintReaslutBefore(prev_number , number_s[i])) {
			cout << number_s[i] << " is repeat : " << getRepeatNumberWithUnique(number, vesion % 10) << endl;
			prev_number += number_s[i];
		}
		vesion = vesion / 10;
	}
}


int main()
{
	
	int number = readPositiveNumber("pleas Enter Postive number ");
	printReverserNumber(number);

	return 0;
}

