/*
 * Use accumulate to sum the elements in a vector<int>.
 */

#include <iostream>
#include <vector>
#include <numeric>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> ivec{1, 2, 3, 4};
    cout << accumulate(ivec.cbegin(), ivec.cend(), 0) << endl;

    return 0;
}