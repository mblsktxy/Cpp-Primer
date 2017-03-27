/*
 * Use find to find the last element in a list of ints with value 0.
 */

#include <iostream>
#include <algorithm>
#include <list>

using std::list;
using std::cout;
using std::endl;

int main() {
    list<int> ilst = {1, 2, 3, 0, 4, 0, 5, 6};
    auto found = find(ilst.crbegin(), ilst.crend(), 0);
    cout << distance(found, ilst.crend()) << endl;

    return 0;
}