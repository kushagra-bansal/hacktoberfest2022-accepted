#include <bits/stdc++.h>
#define N 3
using namespace std;

bool isDDM(int m[N][N], int n)
{
	for (int i = 0; i < n; i++)
{	
		int sum = 0;
		for (int j = 0; j < n; j++)			
			sum += abs(m[i][j]);	
		sum -= abs(m[i][i]);

		if (abs(m[i][i]) < sum)
			return false;

	}

	return true;
}

int main()
{
	int n = 3;
	int m[N][N] = { { 3, -2, 1 },
					{ 1, -3, 2 },
					{ -1, 2, 4 } };

	(isDDM(m, n)) ? (cout << "YES") : (cout << "NO");

	return 0;
}
