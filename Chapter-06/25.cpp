/*
 * Write a main function that takes two arguments. Concatenate the supplied
 * arguments and print the resulting string.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
	string str;
	for (int i = 1; i != argc; ++i)
		str += argv[i];
	cout << str << endl;
	return 0;
}