/*
 * Use the function you wrote for the first exercise in § 8.1.2 (p.314) to print the
 * contents of an istringstream object.
 */

#include <iostream>
#include <sstream>
#include <string>

using std::istream;
using std::istringstream;
using std::string;
using std::cin;
using std::cout;
using std::endl;

istream &func(istream &is) {
	string buf;
	while (is >> buf)
		cout << buf << endl;
	is.clear();
	return is;
}

int main() {
	istringstream iss("Hello");
	istream &is = func(iss);
	cout << is.rdstate() << endl;
	return 0;
}