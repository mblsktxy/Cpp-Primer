/*
 * Extend the program that assigned high pass, pass, and fail grades to also assign
 * low pass for grades between 60 and 75 inclusive. Write two versions: One version
 * that uses only conditional operators; the other should use one or more if
 * statements. Which version do you think is easier to understand and why?
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	for (unsigned grade; cin >> grade;) {
		// conditional operators
		cout << (grade > 90 ? "high pass" 
			                : grade < 60 ? "fail" 
			                             : grade <= 75 ? "low pass" : "pass") << endl;

		// if statements
		if (grade > 90) 
			cout << "high pass";
		else if (grade < 60)
			cout << "fail";
		else if (grade <= 75)
			cout << "low pass";
		else
			cout << "pass";
		cout << endl;
	}

	return 0;
}