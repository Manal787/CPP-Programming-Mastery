#include <iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;
string ReplaceWordInStringUsingBuiltInFunction
(string S1, string StringToReplace, string sReplceTo)
{
	short pos = S1.find(StringToReplace);
	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), sReplceTo);
		pos = S1.find(StringToReplace);
	}
	return S1;
}
int main()
{
	string S1 = "Welcome to Saudi Arabia,Saudi Arabia is a nice country";
	string StringToReplace = "Saudi Arabia";
	string ReplceTo = "KSA";

	cout << "\n Original String \n" << S1;
	cout << "\n\nString After Replace";
	cout << "\n" << ReplaceWordInStringUsingBuiltInFunction
	(S1, StringToReplace, ReplceTo);

	system("pause>0");
	return 0;
}

