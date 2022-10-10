#include <bits/stdc++.h>

# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
using namespace std;
bool isMagicSquare(int mat[][3])
{
	int n = my_sizeof(mat)/my_sizeof(mat[0]);
	int i=0,j=0;
	int sumd1 = 0, sumd2=0;
	for (i = 0; i < n; i++)
	{
		sumd1 += mat[i][i];
		sumd2 += mat[i][n-1-i];
	}
	if(sumd1!=sumd2)
		return false;

	// For sums of Rows
	for (i = 0; i < n; i++) {

		int rowSum = 0, colSum = 0;
		for (j = 0; j < n; j++)
		{
			rowSum += mat[i][j];
			colSum += mat[j][i];
		}
		if (rowSum != colSum || colSum != sumd1)
			return false;
	}
return true;
}
int main()
{
	int mat[3][3] = {{ 2, 7, 6 },
					{ 9, 5, 1 },
					{ 4, 3, 8 }};

	if (isMagicSquare(mat))
		cout << "Magic Square";
	else
		cout << "Not a magic Square";

	return 0;
}
