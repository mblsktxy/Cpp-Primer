/*
 * Write a program that uses stable_sort and isShorter to sort a vector passed
 * to your version of elimDups. Print the vector to verify that your program
 * is correct.
 */

#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void elimDups(vector<string> &words) {
	// sort words alphabetically so we can find the duplicates
	sort(words.begin(), words.end());
	// unique reorders the input range so that each word appears once in the
	// front portion of the range and returns an iterator one past the unique range
	auto end_unique = unique(words.begin(), words.end());
	// erase uses a vector operation to remove the nonunique elements
	words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

int main() {
	vector<string> svec{"1234", "1234", "1234", "Hi", "World", "Hello"};
	elimDups(svec);
	stable_sort(svec.begin(), svec.end(), isShorter);
	for (const auto &i: svec)
		cout << i << " ";
	cout << endl;

	return 0;
}