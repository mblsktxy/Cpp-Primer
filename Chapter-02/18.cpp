/*
 * Write code to change the value of a pointer. Write code to change the value to
 * which the pointer points.
 */

#include <iostream>

int main() {
	int a = 0, b = 1;
	int *p1 = &a, *p2 = p1;

	// change the value of a pointer
	p2 = &b;
	std::cout << *p2 << std::endl;
	// change the value to which the pointer points
	*p1 = 2;
	std::cout << a << std::endl;

	return 0;
}