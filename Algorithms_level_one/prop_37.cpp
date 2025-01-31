

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


float sumNumbers(float number, float sum)
{
	if (number != -99) sum += number;
	return sum;
}

float fillInput(){

	float number;
	float sum = 0;
	do
	{
	cout << "Please Enter number" << endl;
	cin >> number;
	sum = sumNumbers(number, sum);

	} while (number != -99);

	return sum;

	
}



void printResult(float result) {
	
	cout <<  endl << result << endl;

}


int main()
{

	printResult(fillInput());
	return 0;
}

