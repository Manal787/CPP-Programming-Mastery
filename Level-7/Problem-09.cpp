#include <iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	short Counter = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}
void PrintMiddleRow(int arr[3][3], short Rows, short Cols)//طباعة الصف الاوسط 
{
	short MiddleRow = Rows / 2;
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[MiddleRow][j]<< "    ";
		}
		cout << "\n";
}
void PrintMiddleCol(int arr[3][3], short Rows, short Cols)//طباعة العامود الاوسط 
{
	short MiddleCol = Cols / 2;
	for (short i = 0; i < Rows; i++)
	{
		cout << setw(3) << arr[i][MiddleCol] << "    ";
	}
	cout << "\n";
}


int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3];

	FillMatrixWithRandomNumbers(Matrix1,3,3);

	cout << "\nMatrix 1:\n";
	PrintMatrix(Matrix1,3,3);

	cout << "\n Middle Row of Matrix1:\n";
	PrintMiddleRow(Matrix1, 3, 3);

	cout << "\n Middle Col of Matrix1:\n";
	PrintMiddleCol(Matrix1,3, 3);

	system("pause>0");
	return 0;
}

