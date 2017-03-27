/*
 * Reimplement the program that eliminated duplicate words that we wrote in
 * § 10.2.3 (p.383) to use a list instead of a vector.
 */

#include <iostream>
#include <string>
#include <list>

using std::string;
using std::list;
using std::cout;
using std::endl;

void elimDups(list<string> &words) {
    words.sort();
    words.unique();
}

int main() {
    list<string> slst{"aa", "aa", "aa", "aa", "aasss", "aa"};
    elimDups(slst);
    for (const auto &e: slst)
        cout << e << " ";
    cout << endl;

    return 0;
}