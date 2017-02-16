/*
 * Write a program to read strings from the standard input, concatenating what
 * is read into one large string. Print the concatenated string. Next, change the
 * program to separate adjacent input strings by a space.
 */

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string concatenated, str;
	// for (; cin >> str; concatenated += str);
	// cout << "The concatenated string is " << concatenated << endl; 

    // separate adjacent input strings by a space
    cin >> str;
    concatenated += str;
    for (; cin >> str; concatenated += " " + str);
    cout << "The concatenated string is " << concatenated << endl;

	return 0;
}