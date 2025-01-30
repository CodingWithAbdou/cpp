

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int ReadMsgs(){
	int number;

	cout << "Please Enter number" << endl;
	cin >> number;
						  
	return number;
}



double calc(int number){
	float const pi = 3.14;
	double  area = pow(number ,2) / (4 * pi);
	return area;
}

void print(double value) {
	cout << "area is : \n" << value;
}


int main()
{

	print(calc(ReadMsgs()));


	return 0;
}

