/*
 * Write a program to define two character arrays initialized from string literals.
 * Now define a third character array to hold the concatenation of the two arrays.
 * Use strcpy and strcat to copy the two arrays into the third.
 */

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main() {
	char cstr1[] = "Hello ";
	char cstr2[] = "World!";
	size_t size = strlen(cstr1) + strlen(cstr2) + 1;
	char cstr3[size];

	strcpy(cstr3, cstr1);
	strcat(cstr3, cstr2);
	cout << cstr3 << endl;

	return 0;
}