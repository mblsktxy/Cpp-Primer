/*
 * Given two vectors of ints, write a program to determine whether one vector
 * is a prefix of the other. For vectors of unequal length, compare the number
 * of elements of the smaller vector. For example, given the vectors containing
 * 0, 1, 1, 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should 
 * return true.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

bool is_prefix(vector<int> ivec1, vector<int> ivec2) {
	if (ivec1.size() > ivec2.size())
		return is_prefix(ivec2, ivec1);
	for (decltype(ivec1.size()) i = 0; i != ivec1.size(); ++i)
		if (ivec1[i] != ivec2[i])
			return false;
	return true;
}

int main() {
	vector<int> v1{0, 1, 1, 2};
	vector<int> v2{0, 1, 1, 2, 3, 5, 8};
	cout << (is_prefix(v1, v2) ? "True" : "False") << endl;

	return 0;
}