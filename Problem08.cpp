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
void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3],int Results[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Results[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3], Results[3][3];

	FillMatrixWithRandomNumbers(Matrix1,3,3);
	FillMatrixWithRandomNumbers(Matrix2, 3, 3);

	cout << "\nMatrix 1:\n";
	PrintMatrix(Matrix1,3,3);

	cout << "\n Matrix 2:\n";
	PrintMatrix(Matrix2, 3, 3);

	MultiplyMatrix(Matrix1, Matrix2, Results, 3, 3);

	cout << "\nResults:\n";
	PrintMatrix(Results,3, 3);

	system("pause>0");
	return 0;
}

