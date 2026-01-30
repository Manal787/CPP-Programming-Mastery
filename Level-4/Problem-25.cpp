#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int ReadAge()
{
	short Age;
	cout << "Please enter Age Between 18 and 45 ?" << endl;
	cin >> Age;
	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}
int ReadUntilAgeBetween(int From, int To)
{
	short Age = 0;
	do
	{
		Age = ReadAge();
	} while (!ValidateNumberInRange(Age, From, To));

	return Age;

}
void PrintResult(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a valid age \n";
	else
		cout << Age << "is a invaid age \n";
}

int main()
{
	PrintResult(ReadUntilAgeBetween(18, 45));
	return 0;
};
