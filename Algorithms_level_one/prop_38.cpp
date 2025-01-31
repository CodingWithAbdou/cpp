

#include <iostream>
#include <string>
#include <cmath>

using namespace std;



enum EnNumber { Prime = 1, NotPrime = 2 };

int  checkNumberIsPrime(int number)
{
	bool isPrime = true;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			isPrime = false;
			break;
		}
	}
	if (isPrime) return EnNumber::Prime;
	return EnNumber::NotPrime;
}

void fillInput(int& number){

	cout << "Please Enter number" << endl;
	cin >> number;	
}



void printResult(int status) {
	string msg;

	if (status == EnNumber::Prime) msg = "Number is Prime";
	else msg = "NUmber Is Not Prime";
	
	cout <<  endl << msg << endl;

}


int main()
{
	int number;
	fillInput(number);
	printResult(checkNumberIsPrime(number));
	return 0;
}

