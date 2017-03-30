/*
 * Rewrite the word-counting program from § 11.1 (p.421) to use insert instead
 * of subscripting. Which program do you think is easier to write and read?
 * Explain your reasoning.
 */

#include <iostream>
#include <map>
#include <string>

using std::map;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	map<string, size_t> word_count;
	string word;
	while (cin >> word) {
		auto result = word_count.insert({word, 1});
		if (!result.second)
			++result.first->second;
	}

	for (const auto &w: word_count)
		cout << w.first << " occurs" << w.second
			 << ((w.second > 1) ? " times" : " time") << endl;

	return 0;
}