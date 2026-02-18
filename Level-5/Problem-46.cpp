#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

float MyABC(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1;
}
float ReadNumber()
{
    float Number;
    cout << "Please Enter a Number?";
    cin >> Number;
    return Number;
}
int main()
{
    
    float Number = ReadNumber();
    cout << "My abs  Result : " << MyABC(Number) << endl;
    cout << "C++ abs Result : " << abs(Number) << endl;


    return 0;
}
