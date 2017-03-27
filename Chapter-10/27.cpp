/*
 * In addition to unique (§ 10.2.3, p.384), the library defines function named
 * unique_copy that takes a third iterator denoting a destination into which to
 * copy the unique elements. Write a program that uses unique_copy to copy the
 * unique elements from a vector into an initially empty list.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main() {
    vector<int> ivec{1, 1, 3, 3, 5, 5, 7, 7, 9};
    list<int> ilst;
    
    unique_copy(ivec.begin(), ivec.end(), back_inserter(ilst));
    for (const auto &i: ilst)
        cout << i << " ";
    cout << endl;

    return 0;
}