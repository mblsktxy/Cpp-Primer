/*
 * Rewrite the program to count words of size 6 or less using functions in place
 * of the lambdas.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::vector;
using std::string;
using namespace std::placeholders;
using std::cout;
using std::endl;

bool check_size(const string &s, string::size_type sz) {
	return s.size() <= sz;
}

int main() {
    vector<string> svec{"hello", "world", "1234567", "1234567", "1234567", "1234567"};
    auto count = count_if(svec.cbegin(), svec.cend(), bind(check_size, _1, 6));
    cout << count << endl;

    return 0;
}