

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


enum EnMonths {
	January = 1
	, February = 2
	, March = 3
	, April = 4
	, May = 5
	, June = 6
	, July = 7
	, August = 8
	, September = 9
	, October = 10
	, November = 11
	, December = 12
};



string getMonthName(int month)
{
	if (month == EnMonths::January) return "January";
	else if (month == EnMonths::February) return "February";
	else if (month == EnMonths::March) return "March";
	else if (month == EnMonths::April) return "April";
	else if (month == EnMonths::May) return "May";
	else if (month == EnMonths::June) return "June";
	else if (month == EnMonths::July) return "July";
	else if (month == EnMonths::August) return "August";
	else if (month == EnMonths::September) return "September";
	else if (month == EnMonths::October) return "October";
	else if (month == EnMonths::November) return "November";
	else if (month == EnMonths::November) return "December";
	else "pleas Eneter number between 1 and 12";
}


void fillInput(int& a ){

	cout << "Please Enter mounth" << endl;
	cin >> a;

}



void printResults(string a) {

	
	cout <<  endl << a << endl;

}


int main()
{
	int month ;
	string monthName;

	fillInput(month);
	monthName = getMonthName(month);
	printResults(monthName);
	return 0;
}

