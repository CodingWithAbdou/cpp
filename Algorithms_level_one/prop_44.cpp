

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


enum EnDays {
	Sunday = 1
	, Monday = 2
	, Tuesday = 3
	, Wednesday = 4
	, Thursday = 5
	, Friday = 6
	, Saturday = 7
};



string getDayName(int day)
{
	if (day == EnDays::Sunday) return "January";
	else if (day == EnDays::Sunday) return "Sunday";
	else if (day == EnDays::Monday) return "Monday";
	else if (day == EnDays::Tuesday) return "Tuesday";
	else if (day == EnDays::Wednesday) return "Wednesday";
	else if (day == EnDays::Thursday) return "Thursday";
	else if (day == EnDays::Friday) return "Friday";
	else if (day == EnDays::Saturday) return "Saturday";
	else "pleas Eneter number between 1 and 7";
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
	int day ;
	string dayName;

	fillInput(day);
	dayName = getDayName(day);
	printResults(dayName);

	return 0;
}

