/*
 * Implement your own version of elimDups. Test your program by printing the
 * vector after you read the input, after the call to unique, and after the
 * call to erase.
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
	cout << "After sort: \n";
	for (const auto &i: words)
		cout << i << " ";
	cout << endl;
	// unique reorders the input range so that each word appears once in the
	// front portion of the range and returns an iterator one past the unique range
	auto end_unique = unique(words.begin(), words.end());
	cout << "After unique: \n"; 
	for (const auto &i: words)
		cout << i << " ";
	cout << endl;
	// erase uses a vector operation to remove the nonunique elements
	words.erase(end_unique, words.end());
	cout << "After erase: \n";
	for (const auto &i: words)
		cout << i << " ";
	cout << endl;
}

int main() {
    vector<string> svec{"a", "v", "a", "s", "v", "a", "a"};
    cout << "Original vector: \n";
    for (const auto &i: svec)
    	cout << i << " ";
    cout << endl;
    elimDups(svec);

    return 0;
}