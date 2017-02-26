/*
 * Write a program that uses a do while loop to repetitively request two strings
 * from the user and report which string is less than the other.
 */

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string str1, str2, rsp;
	do {
		cout << "Please enter two strings:\n";
		cin >> str1 >> str2;
		cout << "The smaller of the two strings is: "
		 	 << (str1 > str2 ? str2 : str1) << "\n"
			 << "More? Enter yes or no: ";
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');

	return 0;
}