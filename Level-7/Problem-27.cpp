#include <iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;

char ReadChar()
{
	char Ch;
	cout << "Please Enter a Character?" << endl;
	cin >> Ch;

	return Ch;
}
char InvertLetterCase(char Ch)
{
	return isupper(Ch) ? tolower(Ch) : toupper(Ch);
}

int main()
{
	char Ch1 = ReadChar();
cout << "\nChar after inverting case:\n";
Ch1 = InvertLetterCase(Ch1);
cout << Ch1 << endl;

	system("pause>0");
	return 0;
}

