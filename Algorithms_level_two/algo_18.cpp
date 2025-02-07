

#include iostream
#include string
#include cmath

using namespace std;

bool validationChar(string charc , int size) {


	if (charc.size() != size) return false;

		
	for (int j = 0; j  size; j++) {
		if ((int)charc[j]  65  (int)charc[j]  91) {
			return false;
		};
	}
		
	

	return true;

}

string getCharFromUser()
{
	string charc = ;
	do
	{
		cout  please enter three word capital like AAA  endl;
		cin  charc;

	} while (!validationChar(charc , 3));


	return charc;
}

int countTraits(string charc)
{
	int counter = 0;
	for (char i = 'A'; i = 'Z'; i++)
	{
		for (char j = 'A'; j = 'Z'; j++)
		{
			for (char k = 'A'; k = 'Z'; k++)
			{
				counter++;
				string value = ;
				value += i;
				value += j;
				value += k;
				if (value == charc) return counter;
			}
		}
	}
}

void printNumber(int counter)
{
	
	cout  found after   counter   tria;

}

int main()
{
	
	printNumber(countTraits(getCharFromUser()));

	return 0;
}

