/*
 * Give the second parameter of make_plural (§ 6.3.2, p.224) a default argument
 * of ’s’. Test your program by printing singular and plural versions of the words
 * success and failure.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

string make_plural(size_t ctr, const string &word, const string &ending = "s") {
	return (ctr > 1) ? word + ending : word;
}

int main() {
	cout << "Singual:\t" << make_plural(1, "success", "es") << " "
		 << make_plural(1, "failure") << endl;
	cout << "Plural:\t\t" << make_plural(2, "success", "es") << " "
	     << make_plural(2, "failure") << endl;

	return 0;
} 