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

bool IsScalarMatrices(int Matrix1[3][3],short Rows, short Cols)
{
	int FirstDiagElement = Matrix1[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (i== j&& Matrix1[i][j]!=FirstDiagElement)
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
	int Matrix1[3][3] = { {9,0,0}, {0,9,0}, {0,0,9} };

	cout << "\nMatrix 1:\n";
	PrintMatrix(Matrix1,3,3);

	if (IsScalarMatrices(Matrix1, 3, 3))
	
		cout << "\n Yes: matrices is scalar.\n";
	else
		cout << "\n No:Martices is NOT scalar.\n";

	system("pause>0");
	return 0;
}
