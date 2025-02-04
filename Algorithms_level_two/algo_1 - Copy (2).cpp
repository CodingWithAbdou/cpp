

#include <iostream>
#include <string>
#include <cmath>

using namespace std;




void print() {	
	for (int i = 1; i <= 10; i++) {

		if (i == 1) {
			for (int j = 0; j <= 10; j++) {
				if (j == 0)   cout << "           ";
				else cout << j * i << "      ";
				 
			}
			cout << endl << "_____________________________________________________________________________" << endl;
		}

		for (int j = 1; j < 2; j++) {
			if(i ==10) cout << j * i << "      |  ";
			else cout << j * i << "       |  ";
		}

		for (int j = 1; j <= 10; j++) {
			string space = "      ";
			if (j * i  > 9) space = "     ";
			cout << j * i << space;
		}

		cout << endl;
 	}
}


int main()
{
	
	print();

	return 0;
}

