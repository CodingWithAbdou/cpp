

#include <iostream>
#include <string>
#include <cmath>

using namespace std;



float calc(float a, float b)
{
	return a / b ;
}



void fillInput(float& a , float& b){

	cout << "Please Enter Loan Amount" << endl;
	cin >> a;

	cout << "Please Enter Loan time" << endl;
	cin >> b;
}



void printResults(float a) {

	
	cout <<  endl << a << endl;

}


int main()
{
	float loanAmount , loanTime;;

	fillInput(loanAmount , loanTime);
	printResults(calc(loanAmount, loanTime));

	return 0;
}

