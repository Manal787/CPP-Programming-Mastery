#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\n Please enter a number to search for?\n";
    cin >> Number;
    return Number;
}

void AddArrayElement(int Number,int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength-1] = Number;
}

void InputUserNumbersInArray( int arr[100], int& arrLength)
{
    bool AddMore = true;
    do
    {
        AddArrayElement(ReadNumber(), arr, arrLength);
        cout << "\nDo you want to add more numbers?[0]:No,[1]:Yes? ";
        cin >> AddMore;
    } while (AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "\n";
}

int main()
{
    int arr[100];
    int arrLength=0;
    InputUserNumbersInArray(arr, arrLength);
    
    cout << "\n Array Length:" << arrLength << endl;
    cout << "Array Elements:";
    PrintArray(arr, arrLength);

    return 0;
}
