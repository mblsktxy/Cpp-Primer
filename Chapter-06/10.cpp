/*
 * Using pointers, write a function to swap the values of two ints. Test the
 * function by calling it and printing the swapped values.
 */

#include <iostream>

using std::cout;
using std::endl;

void swap(int *i1, int *i2) {
	int temp;
	temp = *i1;
	*i1 = *i2;
	*i2 = temp;
}

int main() {
	int i1 = 1;
	int i2 = 2;
	swap(&i1, &i2);
	cout << i1 << " " << i2 << endl; 
	return 0;
}