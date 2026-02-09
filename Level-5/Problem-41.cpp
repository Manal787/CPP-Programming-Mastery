#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
    arrLength = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;

}

bool IsPalindromeArray(int arr[100], int Length)
{
    for (int i = 0; i < Length/2; i++)
    {
        if (arr[i]!=arr[Length-1-i])
        {
            return false;
        }
    }
    return true;
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
    int Length = 0;

    FillArray(arr,Length);
    
    cout << "Array elements:\n";
    PrintArray(arr,Length);

    if (IsPalindromeArray(arr,Length))
        cout << "\nYes array is Palindrome\n";
    else
        cout << "\nNo array is NOT Palindrome\n";

    return 0;
}
