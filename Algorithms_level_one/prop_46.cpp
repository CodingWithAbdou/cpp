

#include <iostream>
#include <string>
#include <cmath>

using namespace std;




void print() {


	char albet[26];

	for (int ch = 'a'; ch <= 'z'; ch++) {
		albet[ch - 'a'] = ch;
	}
	for (int i = 0; i < 26; i++) {
	cout << albet[i] << endl;
	}
}


int main()
{
	
	print();

	return 0;
}

