#include <iostream>
using namespace std;

#define n 3

bool checkMarkov(double m[][n])
{
	for (int i = 0; i <n; i++) {
		double sum = 0;
		for (int j = 0; j < n; j++)
			sum = sum + m[i][j];

		if (sum != 1)
		return false;
	}

	return true;
}
int main()
{
	double m[3][3] = { { 0, 0, 1 },
					{ 0.5, 0, 0.5 },
					{ 1, 0, 0 } };
	if (checkMarkov(m))
		cout << " yes ";
	else
		cout << " no ";
}
