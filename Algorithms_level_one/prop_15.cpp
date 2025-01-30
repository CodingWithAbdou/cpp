

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



void printSwapNumbers(stNumber numbers) {

	cout << numbers.NumberTwo << endl;
	cout << numbers.NumberOne << endl;
}


int main()
{

	printSwapNumbers(ReadMsgs());


	return 0;
}

