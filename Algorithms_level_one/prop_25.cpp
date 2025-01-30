

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
	
	while (!validation(age))
	{
		cout << "Please Enter valid age" << endl;
		cin >> age;
	}

	cout << "Valid Age" << endl;
}


int main()
{

	print(validation(ReadMsgs()));


	return 0;
}

