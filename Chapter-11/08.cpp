/*
 * Write a program that stores the excluded words in a vector instead of in a set.
 * What are the advantages to using a set?
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    vector<string> exclude{"aa", "bb", "cc", "dd", "ee", "ff"};
    for (string word; cout << "Enter word:\n", cin >> word;) {
        auto is_excluded = binary_search(exclude.cbegin(), exclude.cend(), word);
        auto reply = is_excluded ? "Excluded" : "Not excluded";
        cout << reply << endl;
    }

    return 0;
}