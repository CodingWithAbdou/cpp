

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int readNumberFromUser(string msg)
{
	int number;
	cout << msg << endl;
	cin >> number;
	

	return number;
}
int myAbs(int number) {
	if (number < 0) return number * -1;
	else return number;
}

int main() {

	int number = readNumberFromUser("please enter number : ");

	

	cout << endl << "abs number is : " << myAbs(number) << endl;


	
	
	return 0;
}
