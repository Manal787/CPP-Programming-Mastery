#include <iostream>
#include<string>
#include<cmath>
using namespace std;
void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please enter Num1?" << endl;
	cin >> Num1;
	cout << "Please enter Num2 ?" << endl;
	cin >> Num2;
}
int MaxofNumbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}
void PrintResults(int Max)
{
	cout << "\n The Maximum Number is :" << Max << endl;

}


int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintResults(MaxofNumbers(Num1, Num2));
	return 0;
};
