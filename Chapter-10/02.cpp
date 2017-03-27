/*
 * Repeat the previous program, but read values into a list of strings.
 */

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using std::list;
using std::string;
using std::cout;
using std::endl;

int main() {
    list<string> slst{"aa", "aaa", "aa", "cc"};
    cout << count(slst.cbegin(), slst.cend(), "aa") << endl;
    
    return 0;
}