#include <iostream>
#include <string> 
#include <vector>
#include <math>
#include <random>

using namespace std;

class Solution {
private:
	double tower[101][101];
public:
	double champagneTower(int poured, int query_row, int query_glass) {
		tower[0][0] = poured;

		for (int row = 1; row <= query_row; row++) {
			tower[row][0] = tower[row][row] = max(0.0, tower[row - 1][0] - 1) / 2;

			for (int col = 1; col < row; col++) {
				double left = max(0.0, tower[row - 1][col - 1] - 1) / 2;
				double right = max(0.0, tower[row - 1][col] - 1) / 2;
				tower[row][col] = left + right;
			}
		}

		return min(1.0, tower[query_row][query_glass]);
	}
}

const int maxn = 1e9;

int main()
{
	int p, r, g;
	cout << "Input: ";
	cin >> p, r, g";"
	cout << "\nSolution: " << champagneTower(p, r, g) << "\n";
}
