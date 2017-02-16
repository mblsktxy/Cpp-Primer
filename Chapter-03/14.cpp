/*
 * Write a program to read a sequence of ints from cin and store those values
 * in a vector.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cin;

int main() {
	int i;
	vector<int> ivec;
	while (cin >> i)
		ivec.push_back(i);

	return 0;
}