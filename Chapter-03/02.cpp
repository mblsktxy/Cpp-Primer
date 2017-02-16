/*
 * Write a program to read the standard input a line at a time. Modify your program 
 * to read a word at a time.
 */

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main() {
	// read a line at a time
	// for (string str; getline(cin, str); cout<< str << endl);
	// read a word at a time
	for (string str; cin >> str; cout << str << endl);
	return 0;
}