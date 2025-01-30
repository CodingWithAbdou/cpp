

#include <iostream>

#include <string>
using namespace std;

struct stMark {
	int markOne;
	int markTwo;
	int markThree;
};

stMark ReadMsgs(){
	stMark marks;
	cout << "Please Enter Mark One" << endl;
	cin >> marks.markOne;

	cout << "Please Enter Mark Two" << endl;
	cin >> marks.markTwo;

	cout << "Please Enter Mark Three" << endl;
	cin >> marks.markThree;

	return marks;
}

float calcAvrg(stMark marks)
{
	float avg;
	avg = (float)(marks.markOne + marks.markTwo + marks.markThree) / 3;
	return avg;
}

void printResults(float avg)
{
	string msg;

	cout << endl << (avg) << endl;

	if (avg >= 50)
		msg = "PASS";
	else
		msg = "FAIL";
	

	cout << msg << endl;
}




int main()
{

	printResults(calcAvrg(ReadMsgs()));


	return 0;
}

