

#include <iostream>

#include <string>
using namespace std;

struct stNumber {
	int NumberOne;
	int NumberTwo;
	int NumberThree;
};

stNumber ReadMsgs(){
	stNumber numbers;
	cout << "Please Enter NUmber One" << endl;
	cin >> numbers.NumberOne;
						  
	cout << "Please Enter NUmber Two" << endl;
	cin >> numbers.NumberTwo;

	cout << "Please Enter NUmber Three" << endl;
	cin >> numbers.NumberThree;
	
	return numbers;
}

int getBiggerNUmber(stNumber numbers) {
	int value = 0;
	if (numbers.NumberOne / numbers.NumberTwo >= 1) {
		value = numbers.NumberOne;
	}
	else {
		value = numbers.NumberTwo;
	}

	if (value / numbers.NumberThree < 1) {
		value = numbers.NumberThree;
	}

	return value;
}
void printBigestNumber(int number) {
	cout << "\n The Big Number Is :" << number;
}


int main()
{

	printBigestNumber(getBiggerNUmber(ReadMsgs()));


	return 0;
}

