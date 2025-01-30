

#include <iostream>
#include <string>
#include <cmath>

using namespace std;




int ReadMsgs(){
	int number;

	cout << "Please Enter your age" << endl;
	cin >> number;
		


	return number;
}



double validation(int age){
	return age >= 18 && age <= 45;
}

void print(int age) {
	string msg = "Invalid Age";
	if (age) msg = "valid Age";
	cout << msg << endl;
}


int main()
{

	print(validation(ReadMsgs()));


	return 0;
}

