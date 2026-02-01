enum enPrimNotPrime{Prime=1,NotPrime=2};

int ReadPositiveNumbre(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;

}

enPrimNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int  counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimNotPrime::NotPrime;
	}
	return enPrimNotPrime::Prime;
}

void PrintPrimeNumberFrom1ToN(int Number)
{
	cout << "\n";
	cout << "Prime Number from" << 1 << "To" << Number;
	cout << "are:" << endl;
	for (int  i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enPrimNotPrime::Prime) 
		{
			cout << i << endl;
		}
	}
}

int main()
{
	PrintPrimeNumberFrom1ToN(ReadPositiveNumbwe("Please Enter a Positive Number ? "));
	return 0;
};
