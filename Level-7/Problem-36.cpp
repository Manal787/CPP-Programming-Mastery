#include <iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;
string ReadString()
{
	string S1;
	cout << "\nPlease Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
short CountWords(string S1)
{
	string delim = " ";
	short Counter = 0;
	short pos = 0;
	string sWord;

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			Counter++;
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1!="")
	{
		Counter++;
	}
	return Counter;
}
int main()
{
	string S1 = ReadString();
	cout << "\n The number of words in your string is: ";
	cout << CountWords(S1);

	system("pause>0");
	return 0;
}
