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
void PowerOf2_3_4(int Number)
{
	int a, b, c;
	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;
	cout << a << "\n" << b << "\n" << c << endl;
}


int main()
{
	PowerOf2_3_4(ReadNumber());
	return 0;
};
