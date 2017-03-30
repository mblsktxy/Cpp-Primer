/*
 * Extend your program to ignore case and punctuation. For example, “example.”
 * “example,” and “Example” should all increment the same counter.
 */

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
 
using std::map;
using std::set;
using std::string;
using std::cin;
using std::cout;
using std::endl;

string &strip(string& str) {
    for (auto &ch: str) 
    	ch = tolower(ch);
    // remove_if returns an iterator to the element that follows the last element
    // not removed
    str.erase(remove_if(str.begin(), str.end(), ispunct), str.end());
    return str;
}

int main() {
	// count the number of times each word occurs in the input
	map<string, size_t> word_count; // empty map from string to size_t
	set<string> exclude{"The", "But", "And", "Or", "An", "A",
						"the", "but", "and", "or", "an", "a"};
	string word;
	while (cin >> word)
		// count only words that are not in exclude
		if (exclude.find(word) == exclude.end())
			++word_count[strip(word)]; // fetch and increment the counter for word
	for (const auto &w: word_count)
		cout << w.first << " occurs " << w.second
		 	 << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}