/*
 * Write a funtion that takes a string representing a name and two other strings
 * representing a prefix, such as “Mr.” or “Ms.” and a suffix, such as “Jr.” or
 * “III”. Using iterators and the insert and append functions, generate and return
 * a new string with the suffix and prefix added to the given name.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

void add_pre_and_suffix(string &name, const string &pre, const string &su) {
	name.insert(name.begin(), pre.begin(), pre.end());
	name.append(su);
}

int main() {
    string s{"Jonson"};
 	add_pre_and_suffix(s, "Ms. ", " Jr.");
    cout << s << endl;

    return 0;
}