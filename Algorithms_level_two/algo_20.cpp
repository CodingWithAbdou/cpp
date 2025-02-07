

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enType { number = 0, smallLetter = 1, capitalLetter = 2, character = 3 };

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	cout << (char)RandomNumber(65 + 26, 65 + (26 * 2)) << endl;
	cout << (char)RandomNumber(65, 65 + (26 * 1)) << endl;
	cout << (char)RandomNumber(33 ,47) << endl;
	cout << RandomNumber(1, 10) << endl;
	
	//cout << RandomNumber(1, 100) << endl;
	//cout << RandomNumber(1, 100) << endl;
	return 0;
}
