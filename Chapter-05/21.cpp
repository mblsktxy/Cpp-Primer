/*
 * Revise the program from the exercise in § 5.5.1 (p.191) so that it looks only for
 * duplicated words that start with an uppercase letter.
 */

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string str, temp;
	while(cin >> str) {
		if (!isupper(str[0]))
			continue;
		if (str == temp) {
			cout << str << " occurs twice in succession" << endl;
			break;
		} else
			temp = str;
	}

	if (cin.eof())
		cout << "No word was repeated" << endl;

	return 0;
}