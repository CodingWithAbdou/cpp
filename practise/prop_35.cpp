

#include iostream
#include string
#include cmath

using namespace std;


struct stMony
{
	int Penny;
	int Nickel;
	int Dime;
	int Quarter;
	int Dollar;
};

stMony ReadMsgs(){
	stMony mony;

	cout  Please Enter your Penny  endl;
	cin  mony.Penny;

	cout  Please Enter your Nickel  endl;
	cin  mony.Nickel;

	cout  Please Enter your Dime  endl;
	cin  mony.Dime;

	cout  Please Enter your Quarter  endl;
	cin  mony.Quarter;

	cout  Please Enter your Dollar  endl;
	cin  mony.Dollar;

	return mony;
}

int calcMony(stMony mony)
{
	int sum = 0;

	sum = mony.Penny + mony.Nickel  5 + mony.Dime  10 + mony.Quarter  25 + mony.Dollar  100;
	return sum;
}


void print(stMony mony) {
	int sum = calcMony(mony);
	cout  sum    Pennies  endl;
	cout  (float) sum  100   dollars  endl;

}


int main()
{
	print((ReadMsgs()));
	return 0;
}

