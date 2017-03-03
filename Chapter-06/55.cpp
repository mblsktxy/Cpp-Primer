/*
 * Write four functions that add, subtract, multiply, and divide two int values.
 * Store pointers to these functions in your vector from the previous exercise.
 */

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