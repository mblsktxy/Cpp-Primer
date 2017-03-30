/*
 * Write a program to read a sequence of strings and ints, storing each into a
 * pair. Store the pairs in a vector.
 */

#include <iostream>
#include <vector>
#include <utility>
#include <string>

using std::vector;
using std::pair;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	vector<pair<string, int>> pvec;
	string str;
	int i;
	while (cin >> str >> i)
		// pvec.push_back(pair<string, int>(str, i));
		// pvec.push_back(make_pair(str, i));
		pvec.push_back({str, i});

	for (const auto &p: pvec)
		cout << p.first << " : " << p.second << endl;

	return 0;
}