

#include iostream
#include string
#include cmath

using namespace std;

enum enValidtion { currect = 1, manyRequest = 2 };

int checkFromAtm(int atm)
{
	int Attempts = 0;
	while (atm != 1234)

	{
		cout  pleas enter currect atm  endl;
		cin  atm;
		Attempts++;

		if (Attempts == 2) break;
	};

	if (Attempts  2) return enValidtioncurrect;
	else  return enValidtionmanyRequest;
}



void fillInput(int& a ){

	cout  Please Enter Your Atm  endl;
	cin  a;
}



void printBalance(int status) {
		
	string const blance = 7500$;
	if(status == enValidtioncurrect) cout  endl  your balnce is   blance  endl;
	else cout  endl  sorry your account is block  endl;
	

}


int main()
{
	int atm;

	fillInput(atm);
	
	printBalance(checkFromAtm(atm));

	return 0;
}

