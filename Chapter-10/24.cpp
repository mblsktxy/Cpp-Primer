/*
 * Use bind and check_size to find the first element in a vector of ints that
 * has a value greater than the length of a specified string value.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using namespace std::placeholders;

bool check_size(const string &str, string::size_type sz) {
    return str.size() < sz;
}

int main() {
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7};
    string str{"123456"};
    auto result = find_if(vec.begin(), vec.end(), bind(check_size, str, _1));
    if (result != vec.cend())
        cout << *result << endl;
    else
        cout << "Not found" << endl;

    return 0;
}