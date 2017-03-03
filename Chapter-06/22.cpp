/*
 * Write a function to swap two int pointers.
 */

#include <iostream>

using std::cout;
using std::endl;

void swap(int *i, int *j) {
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}

int main() {
	int i = 3;
	int j = 4;
	swap(&i, &j);
	cout << i << ' ' << j << endl;
	return 0;
}