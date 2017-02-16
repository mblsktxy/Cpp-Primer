/*
 * Write a program that reads a string of characters including punctuation and 
 * writes what was read but with the punctuation removed.
 */

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "Enter a string of characters including punctuation:" << endl;
	string s;
	while (getline(cin, s)) {
		for (auto i : s)
			if (!ispunct(i)) 
				cout << i;
		cout << endl;
	}

	return 0; 
}