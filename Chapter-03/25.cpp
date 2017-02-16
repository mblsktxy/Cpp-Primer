/*
 * Rewrite the grade clustering program from § 3.3.3 (p. 104) using iterators
 * instead of subscripts.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
	vector<unsigned> scores(11,0);
	auto it = scores.begin();
	unsigned grade;
	while (cin >> grade)
		if (grade <= 100)
			(*(it + grade/10))++;

	for (auto i = scores.begin(); i != scores.end(); i++)
		cout << *i << " ";
	cout << endl;

	return 0;
}