/*
 * Redo the last exercise from § 3.3.3 (p. 105) using iterators.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
	vector<int> ivec;
	for (int i; cin >> i; ivec.push_back(i));

	if (ivec.empty()) {
		cout << "Give at least one integer." << endl;
		return -1;
	} else if (ivec.size() == 1) {
		cout << ivec[0];
	}

	for (auto it = ivec.begin() + 1; it != ivec.end(); it++)
		cout << *(it - 1) + *it << " ";
	cout << endl;

	auto i = ivec.begin(), j = ivec.end() - 1;
	for (; i < j; i++, j--)
		cout << *i + *j << " ";
	if (i == j)
		cout << *i;
	cout << endl;

	return 0;
}