

#include iostream
#include string
#include cmath

using namespace std;

struct stRect {
	int numberOne;
	int numberTwo;
};

stRect ReadMsgs(){
	stRect numbers;
	cout  Please Enter numberOne  endl;
	cin  numbers.numberOne;
						  
	cout  Please Enter numberTwo  endl;
	cin  numbers.numberTwo;

	
	return numbers;
}



double calc(stRect numbers) {
	double  area = (numbers.numberOne  numbers.numberTwo  1  2);
	return area;
}

void print(double value) {
	cout  tou cap is    value;
}


int main()
{

	print(calc(ReadMsgs()));


	return 0;
}

