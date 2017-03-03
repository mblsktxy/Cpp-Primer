/*
 * Write a function that takes an int and a pointer to an int and returns the larger
 * of the int value or the value to which the pointer points. What type should you use
 * for the pointer?
 */

#include <iostream>

using std::cout;
using std::endl;

int bigger(int i, const int *j) {
	return (i > *j) ? i : *j;	
}

int main() {
	int i = 3;
	cout << bigger(1, &i) << endl;
	return 0;
}