/*
 * Rewrite the program in the first exercise, first using a while and again using
 * a traditional for loop. Which of the three approaches do you prefer and why?
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main() {
	string s("Hello World!");

	// while
	// decltype(s.size()) i = 0;
	// while (i < s.size())
	// 	s[i++] = 'X';
	// cout << s << endl;

	// for
	// for (i = 0; i < s.size(); i++)
	// 	s[i] = 'X';
	// cout << s << endl;

	// range for
	for (auto &c : s)
		c = 'X';
	cout << s << endl;

	return 0;
}