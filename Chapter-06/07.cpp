/*
 * Write a function that returns 0 when it is first called and then generates numbers in
 * sequence each time it is called again.
 */

#include <iostream>

using std::cout;
using std::endl;

size_t count_calls() {
	static size_t ctr = 0; // value will persist across calls
	return ++ctr;
}

int main() {
	for (size_t i = 0; i != 10; ++i)
		cout << count_calls() << " ";
	cout << endl;
	return 0;
}