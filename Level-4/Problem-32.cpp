#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Please enter a Number ?" << endl;
	cin >> Number;

	return Number;
}

int ReadPower()
{
	int Number;
	cout << " Please enter the power ?" << endl;
	cin >> Number;

	return Number;
}
int PowerOfM(int Number, int M)
{
	if (M == 0)
	{
		return 1;
	}

	int P = 1;
	for (int i = 1; i <= M; i++)
	{
		P = P * Number;
	}
	return P;

}


int main()
{
	cout << endl << "Result = " << PowerOfM(ReadNumber(), ReadPower());
	return 0;
};
