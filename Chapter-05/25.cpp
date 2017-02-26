/*
 * Revise your program from the previous exercise to use a try block to catch the
 * exception. The catch clause should print a message to the user and ask them to
 * supply a new number and repeat the code inside the try.
 */

#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main() {
	cout << "Enter two integers:\n";
	int i1, i2;
	cin >> i1 >> i2;
	while(1) {
		try {
			if (i2 == 0)
				throw runtime_error("Divisor is 0");
			cout << "interger1 / interger2 = " << i1 / i2 << endl;
			break;
		} catch (runtime_error err) {
			cout << err.what() << '\n'
			     << "Please provide a non-zero divisor:\n";
			cin >> i2;
			continue;	
		}
	}
	return 0;
}