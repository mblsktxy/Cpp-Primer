/*
 * In addition to the ++ operator that adds 1 to its operand, there is a decrement
 * operator (--) that subtracts 1. Use the decrement operator to write a while that
 * prints the numbers from ten down to zero.
 */

#include <iostream>

int main() {
	int sum = 0, val = 10;
	while (val >= 0) {
		sum += val;
		val --;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
			  << sum << std::endl;
	return 0;
}