/*
 * Call each element in the vector and print their result.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return b != 0 ? a / b : 0;
}

int main() {
	vector<int(*)(int, int)> vf{add, subtract, multiply, divide};
	for (auto f : vf)
		cout << f(2, 2) << std::endl;
 	return 0;
}