#include <iostream>
#include<string>
using namespace std;


string ReadName()
{
	string Name;
	cout << "please enter your Name? " << endl;
	getline(cin, Name);
	return Name;
}

void PrintName(string Name)
{
	cout << "\nYour Name is " << Name << endl;
}


int main()
{
	PrintName(ReadName());
}
