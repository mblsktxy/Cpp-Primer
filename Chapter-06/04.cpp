/*
 * Write a function that interacts with the user, asking for a number and generating
 * the factorial of that number. Call this function from main.
 */

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int fact(int i) {
	return i > 1 ? i * fact(i-1) : 1;
}

void interactive_fact() {
	int i;
	cout << "Please enter an integer:\n";
	while (cin >> i) {
        cout << "The factorial of " << i << " is " << fact(i) << endl;
		cout << "Please enter an integer:\n";
	}
}

int main() {
	interactive_fact();
	return 0;
}