

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
	

		cout << number * number << endl;
		cout << number * number * number << endl;
		cout << number * number * number  * number << endl;

	
}


int main()
{

	print((ReadMsgs()));


	return 0;
}

