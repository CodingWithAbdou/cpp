

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


struct stTimes {
	float days;
	float hours;
	float minuts;
	float seconds;
};

void getDays(float& second , float& days)
{
	days = second / 60 / 60 / 24;

	days = floor(days);
	second = second - days * 60 * 60 * 24;
}

void getHours(float& second, float& hours)
{
	hours = second / 60 / 60;

	hours = floor(hours);
	second = second - hours * 60 * 60 ;
}

void getMinuts(float& second, float& minuts)
{
	minuts = second / 60;
	minuts = floor(minuts);
	second = second - minuts * 60;
}



string changeSecondToDay_Hours_Ninuts_Secinds(float& second)
{
	stTimes time;
	string data;

	getDays(second, time.days );
	getHours(second, time.hours);
	getMinuts(second, time.minuts);

	data = to_string((int)time.days)+ " : " + to_string((int)time.hours) + " : " + to_string((int)time.minuts) + " : " + to_string((int)second);
	return data;
	
}


void fillInput(float& a ){

	cout << "Please Enter second" << endl;
	cin >> a;

}



void printResults(string a) {

	
	cout <<  endl << a << endl;

}


int main()
{
	float seconds ;
	string valueToPrint;

	fillInput(seconds);
	valueToPrint = changeSecondToDay_Hours_Ninuts_Secinds(seconds);
	printResults(valueToPrint);

	return 0;
}

