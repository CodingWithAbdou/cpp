

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



void printNumber(int number)
{
	
	for (int i = 0; i <= to_string(number).size(); i++) {
		cout << to_string(number)[i] << endl;
		
	}
}


int main()
{
	
	int number = readPositiveNumber("pleas Enter Postive number ");
	printNumber(number);

	return 0;
}

