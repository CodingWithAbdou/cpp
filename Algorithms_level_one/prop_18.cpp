
#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;



int EnterData()
{

	int FirstNumber;

	cout  <<  "Please Enter Number" <<  endl;
	cin >> FirstNumber;

	return FirstNumber;
}

double calc(int number) {
	
	double area = 3.14 * number * number;
	return area;
}

int main()
{
	cout << "area circle is : " << calc(EnterData());
	EnterData();
	return 0;


}

