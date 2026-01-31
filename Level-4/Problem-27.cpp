#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int ReadNumbr()
{
	int Number;
	cout << "Please enter a Number?" << endl;
	cin >> Number;
	return Number;
}
void PrintRangeFrom1to1_UsingWhile(int N)
{
	int Counter = N + 1;
	cout << "Range printed using while statement:\n";
	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;
	}
}
void PrintRangeFrom1to1_UsingDoWhile(int N)
{
	int Counter = N + 1;
	cout << "Range printed using Do while statement:\n";
	do
	{
		Counter--;
		cout << Counter << endl;
	} while (Counter > 1);
}
void PrintRangeFrom1to1_UsingFor(int N)
{

	cout << "Range printed using For statement:\n";
	for (int Counter = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

int main()
{
	int N = ReadNumbr();
	PrintRangeFrom1to1_UsingWhile(N);
	PrintRangeFrom1to1_UsingDoWhile(N);
	PrintRangeFrom1to1_UsingFor(N);
	return 0;
};
