/*
 * Write a program to read strings from standard input looking for duplicated words.
 * The program should find places in the input where one word is followed immediately
 * by itself. Keep track of the largest number of times a single repetition occurs
 * and which word is repeated. Print the maximum number of duplicates, or else print
 * a message saying that no word was repeated. For example, if the input is
 *     how now now now brown cow cow
 * the output should indicate that the word now occurred three times.
 */

#include <iostream>
#include <string>

using std::string;
using std::pair;
using std::cin;
using std::cout;
using std::endl;

int main() {
	pair<string, int> maxDuplicated;
	int count = 0;
	for (string str, prestr; cin >> str; prestr = str) {
		cout << prestr << endl;
		if (str == prestr)
			++count;
		else
			count = 1;
		if (count > maxDuplicated.second)
			maxDuplicated = {str, count};
	}

	if (maxDuplicated.second <= 1)
		cout << "No word was repeated" << endl;
	else
		cout << "The word " << maxDuplicated.first << " occurred "
							<< maxDuplicated.second << " times" << endl;

	return 0;
}