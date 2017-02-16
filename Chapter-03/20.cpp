/*
 * Read a set of integers into a vector. Print the sum of each pair of adjacent
 * elements. Change your program so that it prints the sum of the first and last
 * elements, followed by the sum of the second and second-to-last, and so on.
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

	for (decltype(ivec.size()) i = 1; i < ivec.size(); i++)
		cout << ivec[i-1] + ivec[i] << " ";
	cout << endl;

	decltype(ivec.size()) i, j;
	for (i = 0, j = ivec.size() -1; i < j; i++, j--)
		cout << ivec[i] + ivec[j] << " ";
	if (i == j)
		cout << ivec[i];
	cout << endl;

	return 0;
}