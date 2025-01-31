

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


float  calc(float& a)
{
	const int service = 10;
	float billWithService = (a * service / 100) + a;

	const int fee = 16;
	float tatolBill = (billWithService *  fee / 100) + billWithService;
	
	return  tatolBill;
}

void fillInput(float& a){

	cout << "Please Enter Bill Value" << endl;
	cin >> a;
}



void printResult(float a) {

	
	cout <<  endl << a << endl;

}


int main()
{
	float BilValue;
	fillInput(BilValue);
	printResult(calc(BilValue));
	return 0;
}

