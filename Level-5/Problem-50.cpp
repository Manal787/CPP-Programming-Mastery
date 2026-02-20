#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

int MySqrt(float Number)
{
    return pow(Number, 0.5);
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

    cout << "My Mysqrt Result: " << MySqrt (Number) << endl;
    cout << "C++ sqrt Result : " << sqrt(Number) << endl;


    return 0;
}
