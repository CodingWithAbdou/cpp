

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
	for (int i = 1; i <= number; i++)
	{
		cout << i << endl;
	}
}


int main()
{

	print((ReadMsgs()));


	return 0;
}

