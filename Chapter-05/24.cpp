/*
 * Revise your program to throw an exception if the second number is zero. Test
 * your program with a zero input to see what happens on your system if you don’t
 * catch an exception.
 */

#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "Enter two integers:\n";
	int i1, i2;
	cin >> i1 >> i2;
	if (i2 == 0)
		throw std::runtime_error("Divisor is 0");
	cout << "interger1 / interger2 = " << i1 / i2 << endl;
	return 0;
}