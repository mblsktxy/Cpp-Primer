/*
 * Write a program that accepts the options presented in this section. Print the
 * values of the arguments passed to main.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
	string str;
	for (int i = 0; i != argc; ++i)
		cout << "argv[" << i << "] = " << argv[i] << endl;
	return 0;
}