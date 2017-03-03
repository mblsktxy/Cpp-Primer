/*
 * Rewrite the program from exercise 6.10 in § 6.2.1 (p.210) to use references instead
 * of pointers to swap the value of two ints. Which version do you think would be easier
 * to use and why?
 */

#include <iostream>

using std::cout;
using std::endl;

void swap(int &i1, int &i2) {
	int temp;
	temp = i1;
	i1 = i2;
	i2 = temp;
}

int main() {
	int i1 = 1;
	int i2 = 2;
	swap(i1, i2);
	cout << i1 << " " << i2 << endl; 
	return 0;
}