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
void PrintRangeFrom1toN_UsingWhile(int N)
{
	int Counter = 0;
	cout << "Range printed using while statement:\n";
	while (Counter < N)
	{
		Counter++;
		cout << Counter << endl;
	}
}
void PrintRangeFrom1toN_UsingDoWhile(int N)
{
	int Counter = 0;
	cout << "Range printed using Do while statement:\n";
	do
	{
		Counter++;
		cout << Counter << endl;
	} while (Counter < N);
}
void PrintRangeFrom1toN_UsingFor(int N)
{

	cout << "Range printed using For statement:\n";
	for (int Counter = 1; Counter <= N; Counter++)
	{
		cout << Counter << endl;
	}
}

int main()
{
	int N = ReadNumbr();
	PrintRangeFrom1toN_UsingWhile(N);
	PrintRangeFrom1toN_UsingDoWhile(N);
	PrintRangeFrom1toN_UsingFor(N);
	return 0;
};
