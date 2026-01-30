#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int ReadAge()
{
	short Age;
	cout << "Please enter your Age ?" << endl;
	cin >> Age;
	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
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
	PrintResult(ReadAge());
	return 0;
};
