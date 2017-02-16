/*
 * Write a program to copy a vector of ints into an array of ints.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main() {
	vector<int> vec{0, 1, 2, 3, 4, 5};
	int arr[6];
	for (decltype(vec.size()) i = 0; i != vec.size(); i++)
		arr[i] = vec[i];
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
}