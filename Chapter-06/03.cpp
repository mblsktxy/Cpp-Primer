/*
 * Write and test your own version of fact.
 */

#include <iostream>

using std::cout;
using std::endl;

int fact(int i) {
	return i > 1 ? i * fact(i-1) : 1;
}

int main() {
	cout << "Factorial of 5 is " << fact(5) << endl;
	return 0;
}