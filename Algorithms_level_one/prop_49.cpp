

#include <iostream>
#include <string>
#include <cmath>

using namespace std;



void checkFromAtm(int atm)
{
	while (atm != 1234)

	{
		cout << "pleas enter currect atm" << endl;
		cin >> atm;
	};

	
}



void fillInput(int& a ){

	cout << "Please Enter Your Atm" << endl;
	cin >> a;
}



void printBalance() {
		
	string const blance = "7500$";

	cout <<  endl <<"your balnce is :" << blance << endl;

}


int main()
{
	int atm;

	fillInput(atm);
	checkFromAtm(atm);
	printBalance();

	return 0;
}

