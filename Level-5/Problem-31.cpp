#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

int ReadPositiveNumbre(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;

}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWith1toN(int arr[100], int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = i + 1;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void Swap(int& A, int& B)
{
    int Temp;

    Temp = A;
    A = B;
    B = Temp;
}

void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
    }
}
int main()
{
    srand((unsigned)time(NULL)); 

    int arr[100];
    int arrLength = ReadPositiveNumbre("Enter Number of elements?\n");


    FillArrayWith1toN(arr, arrLength);


    cout << "\nArray Elements Before shuffle:\n";
    PrintArray(arr, arrLength);

    ShuffleArray(arr, arrLength);

    cout << "\nArray Elements After shuffle:\n ";
    PrintArray(arr, arrLength);

    return 0;
}
