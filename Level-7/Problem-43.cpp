#include <iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<vector>

using namespace std;
vector<string>SplitString(string S1, string Delim)
{
	vector<string>vString;

	short pos = 0;
	string sWord;

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}
string JoinString(vector<string>vString, string Delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
string LowerAllString(string S1)
{
	for (short i = 0; i <S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}
string ReplaceWordInStringUsingSplit
(string S1, string StringToReplace, string sReplceTo,bool MathCase=true)
{
	vector<string>vString = SplitString(S1, " ");

	for (string& s : vString)
	{
		if (MathCase)
		{
			if (s == StringToReplace)
			{
				s = sReplceTo;
			}
		}
		else
		{
			if (LowerAllString(s) == LowerAllString(StringToReplace))
			{
				s = sReplceTo;
			}
		}
	}
	return JoinString(vString, " ");
}
int main()
{
	string S1 = "Welcome to Saudi Arabia,Saudi Arabia is a nice country";
	string StringToReplace = "saudi arabia";
	string ReplceTo = "KSA";

	cout << "\n Original String \n" << S1;

	cout << "\n\nReplace with match case:";
	cout << "\n" <<ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplceTo);

	cout << "\n\nReplace with dont match case:";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplceTo,false);

	system("pause>0");
	return 0;
}

