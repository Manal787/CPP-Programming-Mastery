enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
	int Number;
	cout << "please enter a Namber? " << endl;
	cin >> Number;
	return Number;
}

enNumberType CheckNumberType(int Num)
{
	int Result = Num % 2;
	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
		cout << "\nNumber is Even. \n";
	else
		cout << "\n Number is odd. \n";
}


int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));
	return 0;
}
