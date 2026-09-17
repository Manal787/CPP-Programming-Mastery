#include <iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
			//printf("%0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}
short CountNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols)
{
	short NumberCount = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == Number)
			{
				NumberCount++;
			}
		}
	}
	return NumberCount;
}
bool IsNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols)
{
	short NumberCount = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == Number)
			{
				return true;
			}
		}
	}
	return false;
}
void PrintIntersectedNumbers(int Matrix1[3][3],int Matrix2[3][3], short Rows, short Cols)
{
	int Number = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0;j<Cols;j++) 
		{
			Number = Matrix1[i][j];
			if (IsNumberInMatrix(Matrix2,Number,Rows,Cols))
			{
				cout << setw(3) << Number << "      ";
			}
		}
	}
}
int main()
{
	int Matrix1[3][3] = { { 77,5,12}, {22,20,1}, {1,0,9} };
	int Matrix2[3][3] = { {5,80,90},{22,77,1},{10,8,33} };
	cout << "\nMatrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMatrix 2:\n";
	PrintMatrix(Matrix2, 3, 3);

	cout <<"\nIntersected Number are:\n\n";
	PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);

	system("pause>0");
	return 0;
}

