/*
 * Write a program that reads two integers from the standard input and prints the
 * result of dividing the first number by the second.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "Enter two integers:\n";
	int i1, i2;
	cin >> i1 >> i2;
	cout << "interger1 / interger2 = " << i1 / i2 << endl;
	return 0;
}