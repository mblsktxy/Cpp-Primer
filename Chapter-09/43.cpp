/*
 * Write a function that takes three strings, s, oldVal, and newVal. Using iterators,
 * and the insert and erase functions replace all instances of oldVal that appear
 * in s by newVal. Test your function by using it to replace common abbreviations,
 * such as “tho” by ”though” and ”thru” by “through”.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout; 
using std::endl; 

void replace_with(string &s, const string &oldVal, const string &newVal)
{
    for (auto cur = s.begin(); cur <= s.end() - oldVal.size();) {
        if (oldVal == s.substr(cur-s.begin(), oldVal.size())) {
            s.erase(cur, cur + oldVal.size());
            cur = s.insert(cur, newVal.begin(), newVal.end());
            cur += newVal.size();
        }
        else
            ++cur;
    }
}

int main() {
    string s{"To drive straight thru is a foolish, tho courageous act."};
    replace_with(s, "tho", "though");
    replace_with(s, "thru", "through");
    cout << s << endl;

    return 0;
}