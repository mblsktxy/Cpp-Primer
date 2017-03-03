/*
 * Rewrite the isShorter function from § 6.2.2 (p.211) to be inline.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

inline bool is_shorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

int main() {
	cout << is_shorter("hello", "world") << endl;
	return 0;
}