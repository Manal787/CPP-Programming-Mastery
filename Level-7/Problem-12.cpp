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
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf("%0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}

int SumOfMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += Matrix1[i][j];
		}
	}
	return Sum;
}
bool AreTypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] != Matrix2[i][j])
			{
				return false;
			}
		}

	}
         return true;

}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3];

	FillMatrixWithRandomNumbers(Matrix1,3,3);
	cout << "\nMatrix 1:\n";
	PrintMatrix(Matrix1,3,3);

	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\nMatrix 2:\n";
	PrintMatrix(Matrix2, 3, 3);

	if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3))
	
		cout << "\n Yes: matrices are typical.\n";
	else
		cout << "\n No:Martices are NOT typical.\n";

	system("pause>0");
	return 0;
}

