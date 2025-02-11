bool checkIfNumberPrime(int number) {
	int halfNumber = round(number / 2);

	for (int i = 2; i < halfNumber; i++)
	{
		if (number % i == 0) return false;
	}

	return true;
}