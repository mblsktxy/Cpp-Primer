/*
 * Write a function that takes an initializer_list<int> and produces the
 * sum of the elements in the list.
 */

#include <iostream>
#include <initializer_list>

using std::initializer_list;
using std::cout;
using std::endl;

int summation(initializer_list<int> ilist) {
	int sum = 0;
	for (auto i : ilist)
		sum += i;
	return sum;
}

int main() {
	cout << summation({1, 2, 3, 4, 5}) << endl;
	return 0;
}