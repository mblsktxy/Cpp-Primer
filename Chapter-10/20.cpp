/*
 * The library defines an algorithm named count_if. Like find_if, this function 
 * takes a pair of iterators denoting an input range and a predicate that it applies
 * to each element in the given range. count_if returns a count of how often the
 * predicate is true. Use count_if to rewrite the portion of our program that counted
 * how many words are greater than length 6.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main() {
    vector<string> svec{"hello", "world", "1234567", "1234567", "1234567", "1234567"};
    auto count = count_if(svec.cbegin(), svec.cend(),
    					  [](const string &s)
    					    { return s.size() > 6; });
    cout << count << endl;

    return 0;
}