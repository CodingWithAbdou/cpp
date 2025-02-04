

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

int readPositiveNumber(string msg) {
	int number;
	do
	{
		cout << msg << endl;
		cin >> number;
	} while (number < 1);

	return number;
}

enPrimeOrNot checkNumberIsPrime(int number)
{
	int halfNumber = round(number / 2);
	for (int i = 2; i <= halfNumber; i++) {
		if (number % i == 0) return enPrimeOrNot::NotPrime;
	}
	return enPrimeOrNot::Prime;
}


void printPrimeNumber() {



	int loop = readPositiveNumber("pleas Enter 1 to N : ");

	for (int i = 1; i <= loop; i++) {
		if (checkNumberIsPrime(i) == enPrimeOrNot::Prime) cout << i << endl;
 	}
}


int main()
{
	
	printPrimeNumber();

	return 0;
}

