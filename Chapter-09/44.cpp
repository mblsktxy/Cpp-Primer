/*
 * Rewrite the previous function using an index and replace.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout; 
using std::endl; 

void replace_with(string &s, const string &oldVal, const string &newVal)
{
    for (string::size_type pos = 0; pos <= s.size() - oldVal.size();) {
        if (oldVal == s.substr(pos, oldVal.size())) {
            s.replace(pos, oldVal.size(), newVal);
            pos += newVal.size();
        }
        else
            ++pos;
    }
}

int main() {
    string s{"To drive straight thru is a foolish, tho courageous act."};
    replace_with(s, "tho", "though");
    replace_with(s, "thru", "through");
    cout << s << endl;

    return 0;
}