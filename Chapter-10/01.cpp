/* 
 * The algorithm header defines a function named count that, like find, takes a
 * pair of iterators and a value. count returns a count of how often that value
 * appears. Read a sequence of ints into a vector and print the count of how many
 * elements have a given value.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 6, 6, 2};
    cout << count(ivec.cbegin(), ivec.cend(), 6) << endl;

    return 0;
}