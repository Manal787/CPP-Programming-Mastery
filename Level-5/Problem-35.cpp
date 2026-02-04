#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength)
{
    cout << "\nEnter Number Of Elements:\n";
    cin >> arrLength;


    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

short FindNumberPositiveInArray( int Number,int arr[100], int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i]==Number)
            return i;
    }
    return - 1;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "\n";
}
bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositiveInArray(Number, arr, arrLength) != -1;
}
int ReadNumber()
{
    int Number;
    cout << "\n Please enter a number to search for?\n";
    cin >> Number;
    return Number;
}

int main()
{
    srand((unsigned)time(NULL)); 

    int arr[100];
    int arrLength;
    FillArrayWithRandomNumber(arr, arrLength);
    
    cout << "\n Array 1 elements:\n";
    PrintArray(arr, arrLength);

    int Number = ReadNumber();
    cout << "\n Number you are looking for is:" << Number << endl;
    
    if (!IsNumberInArray(Number,arr,arrLength))
        cout << "No,The number is not found :-( \n";
    else
  
        cout << "Yes it is found :-)" << endl;
    return 0;
}
