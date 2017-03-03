/*
 * Write a function to determine whether a string contains any capital letters.
 * Write a function to change a string to all lowercase. Do the parameters you
 * used in these functions have the same type? If so, why? If not, why not?
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

bool any_capital(const string &s) {
	for (auto ch : s)
		if (isupper(ch))
			return true;
	return false;
}

void to_lower(string &s) {
	for (auto &ch : s)
		ch = tolower(ch);
}

int main() {
	cout << any_capital("Hello World!") << endl;
	string str = "Hello World!";
	to_lower(str);
	cout << str << endl;
	return 0;
}