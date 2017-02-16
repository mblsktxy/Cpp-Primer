/*
 * Copy the array you defined in the previous exercise into another array. Rewrite
 * your program to use vectors.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
	// array
	int arr1[10], arr2[10];
	for (size_t i = 0; i != 10; i++)
		arr1[i] = i;
	for (size_t i = 0; i != 10; i++)
		arr2[i] = arr1[i];
	for (auto i : arr2)
		cout << i << " ";
	cout << endl;

	// vector
	vector<int> vec1;
	for (int i = 0; i != 10; i++)
		vec1.push_back(i);
	vector<int> vec2{vec1};
	for (auto i : vec2)
		cout << i << " ";
	cout << endl;

	return 0;
}