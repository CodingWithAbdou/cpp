bool checkIfNumberPrime(int number) {
	int halfNumber = round(number / 2);

	for (int i = 2; i < halfNumber; i++)
	{
		if (number % i == 0) return false;
	}

	return true;
}

int RandomNumber(int From, int To)
{
//Function to generate a random number
int randNum = rand() % (To - From + 1) + From;
return randNum;
}