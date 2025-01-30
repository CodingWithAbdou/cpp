

#include <iostream>

#include <string>
using namespace std;

struct stNumber {
	int NumberOne;
	int NumberTwo;
};

stNumber ReadMsgs(){
	stNumber numbers;
	cout << "Please Enter NUmber One" << endl;
	cin >> numbers.NumberOne;
						  
	cout << "Please Enter NUmber Two" << endl;
	cin >> numbers.NumberTwo;
	
	return numbers;
}

int getBiggerNUmber(stNumber numbers) {
	if (numbers.NumberOne > numbers.NumberTwo) {
		return numbers.NumberOne;
	}
	else {
		return numbers.NumberTwo;
	}
}
void printBigestNumber(int number) {
	cout << "\n The Big Number Is :" << number;
}


int main()
{

	printBigestNumber(getBiggerNUmber(ReadMsgs()));


	return 0;
}

