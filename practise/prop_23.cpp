

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


struct stNumber {
	int numberA;
	int numberB;
	int numberC;
};

stNumber ReadMsgs(){
	stNumber number;

	cout << "Please Enter a" << endl;
	cin >> number.numberA;
		
	cout << "Please Enter b" << endl;
	cin >> number.numberB;


	cout << "Please Enter c" << endl;
	cin >> number.numberC;

	return number;
}



double calc(stNumber number){
	float const pi = 3.14;
	double p = (double)(number.numberA + number.numberB + number.numberC) / 2;
	int calcOne = number.numberA * number.numberB * number.numberC;
	double calcTwo = p * (p - number.numberA) * (p - number.numberB) * (p - number.numberC);
	double calc = calcOne / (4 * sqrt(calcTwo));
	double  area = pi * calc * calc;
	return area;
}

void print(double value) {
	cout << "area is : \n" << value;
}


int main()
{

	print(calc(ReadMsgs()));


	return 0;
}

