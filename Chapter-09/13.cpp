/*
 * How would you initialize a vector<double> from a list<int>? From a 
 * vector<int>? Write code to check your answers.
 */

#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main() {
	list<int> ilst{0, 1, 2, 3, 4, 5};
	vector<int> ivec{5, 4, 3, 2, 1, 0};

	vector<double> dvec(ilst.begin(), ilst.end());
	for (const auto &i: ilst)
		cout << i << " ";
	cout << endl;
	for (const auto &d: dvec)
		cout << d << " ";
	cout << endl;

	vector<double> dvec2(ivec.begin(), ivec.end());
	for (const auto &i: ivec)
		cout << i << " ";
	cout << endl;
	for (const auto &d: dvec2)
		cout << d << " ";
	cout << endl;

	return 0;
}