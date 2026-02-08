#include <iostream>
#include<string>
#include<cmath>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;

}

float CalculatRemainder(float TotalBill, float TotalCashPaid)
{
	return TotalCashPaid - TotalBill;

}
int main()
{
	float TotalBill = ReadPositiveNumber("Please enter Total Bill?");
	float TotalCashPaid = ReadPositiveNumber("Please enter Total Cash Paid");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;

	cout << "******************************\n";
	cout << "Remainder = " << CalculatRemainder(TotalBill, TotalCashPaid) <<
		endl;

	return 0;
};
