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

bool IsIdentityMatrices(int Matrix1[3][3],short Rows, short Cols)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (i== j&& Matrix1[i][j]!=1)
			{
				return false;
			}
			else if (i != j && Matrix1[i][j] != 0)
			{
				return false;

			}
		}

	}
         return true;

}
int main()
{
	int Matrix1[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };

	cout << "\nMatrix 1:\n";
	PrintMatrix(Matrix1,3,3);

	if (IsIdentityMatrices(Matrix1, 3, 3))
	
		cout << "\n Yes: matrices are typical.\n";
	else
		cout << "\n No:Martices are NOT typical.\n";

	system("pause>0");
	return 0;
}

