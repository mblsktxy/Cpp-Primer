/*
 * Write a program to read two strings and report whether the strings are equal.
 * If not, report which of the two is larger. Now, change the program to report
 * whether the strings have the same length, and if not, report which is longer.
 */

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string str1, str2;
	cin >> str1 >> str2;
	// compare two strings
	// if (str1 == str2)
	// 	cout << "The two strings are equal." << endl;
	// else
	// 	cout << "The larger string is " << ((str1 > str2) ? str1 : str2) << endl;

    // compare sizes of two strings
    if (str1.size() == str2.size())
    	cout << "The two strings have the same size." << endl;
    else
    	cout << "The longer string is " << ((str1.size() > str2.size() ? str1 : str2)) << endl;

 	return 0;
}