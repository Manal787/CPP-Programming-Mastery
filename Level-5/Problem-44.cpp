#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
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

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "\n";
}

int PositiveCount(int arr[100],int arrLength)
{
    int Counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] >= 0)
        {
            Counter++;
        }
    }
    return Counter;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100],arrLength;

    FillArrayWithRandomNumber(arr,arrLength);
    
    cout << "Array elements:\n";
    PrintArray(arr,arrLength);

    cout << "\nPositive Numbers count is:";
    cout << PositiveCount(arr, arrLength) << endl;
    return 0;
}
