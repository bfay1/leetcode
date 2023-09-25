#include <string>
#include <vector>

using namespace std;

class Solution {
	vector<int> count(26);

	for (const auto& x : s)
		count[x - 'a']++;

	for (const auto& y : t)
		count[y - 'a']--;

	auto culprit = min_element(count.begin(), count.end()) - count.begin();

	return culprit + 'a';
}
