

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
 

int ReadMsgs(){
	int number;
	cout << "Please Enter r" << endl;
	cin >> number;
						 
	return number;
}



double calc(stRect numbers) {
	double pi = M_PI;
	double  area = (r * r) * (pi);
	return area;
}

void print(double value) {
	cout << "tou cap is : " << value;
}


int main()
{

	print(calc(ReadMsgs()));


	return 0;
}

