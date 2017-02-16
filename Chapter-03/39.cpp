/*
 * Write a program to compare two strings. Now write a program to compare
 * the values of two C-style character strings.
 */

#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cout;
using std::endl;

int main() {
	// string
	string str1{"Hello world"}, str2{"Hello World"};
	if (str1 == str2)
		cout << "Same string" << endl;
	else
		cout << "Different strings" << endl;

    // c-style string
	char cstr1[] = "Hello world";
	char cstr2[] = "Hello world";
	if (!strcmp(cstr1, cstr2))
		cout << "Same c-style string" << endl;
	else
		cout << "Different c-style strings" << endl;

	return 0;
}