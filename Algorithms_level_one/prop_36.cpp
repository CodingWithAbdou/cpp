

#include iostream
#include string
#include cmath

using namespace std;



void fillInput(float& numberOne , float& numberTwo ,string& operation){

	cout  Please Enter number One  endl;
	cin  numberOne;

	cout  Please Enteer number two  endl;
	cin  numberTwo;

	cout  Please Enter operation  endl;
	cin  operation;

	
}

float calc(float numberOne, float numberTwo, string operation)
{
	float result;
	
	if (operation == ) result = numberOne  numberTwo;
	if (operation == +) result = numberOne + numberTwo;
	if (operation == -) result = numberOne - numberTwo;
	if (operation == ) result = numberOne  numberTwo;

	return result;

	
}


void printResult(float result) {
	
	cout   endl  result  endl;

}


int main()
{
	float numberOne, numberTwo;
	string operation;
	fillInput(numberOne, numberTwo, operation);
	printResult(calc(numberOne, numberTwo, operation));
	return 0;
}

