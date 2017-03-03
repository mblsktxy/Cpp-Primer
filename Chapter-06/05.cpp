/*
 * Write a function to return the absolute value of its argument.
 */

#include <iostream>

using std::cout;
using std::endl;

double abs(double i) {
	return i > 0 ? i : -i;
}

int main() {
	cout << "The absolute value of -3.14 is " << abs(3.14) << endl;
	return 0;
}