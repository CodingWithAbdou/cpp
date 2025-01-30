

#include <iostream>
#include <string>
#include <cmath>

using namespace std;




int ReadMsgs(){
	int number;

	cout << "Please Enter your N" << endl;
	cin >> number;
		


	return number;
}




void print(int number) {
	int sum = 0;
	for (int i = 0; i<= number; i++)
	{
		if (i % 2 == 0) sum += i;
	}
	cout << sum << endl;
}


int main()
{

	print((ReadMsgs()));


	return 0;
}

