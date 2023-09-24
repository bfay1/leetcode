#include <iostream>
#include <fstream>
#include <random>

const int mod = 1e9 + 7;
const int t = 1e5;

int main()
{

	std::ofstream tc("champagneTowers.in");
	std::random_device rd1, rd2, rd3;

	std::mt19937 pour(rd1());
	std::mt19937 row(rd2());
	std::mt19937 glass(rd3());

	std::uniform_int_distribution<int> pour_dist(0, 1e9);
	std::uniform_int_distribution<int> row_dist(0, 100);

	tc << t << "\n";
	for (int i = 0; i < 1e5; i++) {
		int p = pour_dist(pour);
		int r = row_dist(row);
		std::uniform_int_distribution<int> glass_dist(0, r);
		int g = pour_dist(glass);
		tc << p << " " << r << " " << g << "\n";
	}
}
