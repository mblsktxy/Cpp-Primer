/*
 * A letter has an ascender if, as with d or f, part of the letter extends above the
 * middle of the line. A letter has a descender if, as with p or g, part of the letter
 * extends below the line. Write a program that reads a file containing words and reports
 * the longest word that contains neither ascenders nor descenders.
 */

#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::cerr;

int main() {
    ifstream ifs("letter.txt");
	if (!ifs) {
		cerr << "No data?!" << endl;
		return -1;
	}

	string non_as_des{"aceimnorsuvwxz"};
	string longest;
	for (string curr; ifs >> curr;) {
		if (curr.find_first_not_of(non_as_des) == string::npos)
			longest = longest.size() < curr.size() ? curr : longest; 
	}

	cout << longest << endl;
	return 0;
}