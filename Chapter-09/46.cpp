/*
 * Rewrite the previous exercise using a position and length to manage the strings.
 * This time use only the insert function.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

void add_pre_and_suffix(string &name, const string &pre, const string &su) {
	name.insert(0, pre);
	name.append(su);
}

int main() {
    string s{"Jonson"};
 	add_pre_and_suffix(s, "Ms. ", " Jr.");
    cout << s << endl;

    return 0;
}