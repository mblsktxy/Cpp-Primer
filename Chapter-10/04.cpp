/*
 * Assuming v is a vector<double>, what, if anything, is wrong with calling
 * accumulate(v.cbegin(), v.cend(), 0)?
 */

#include <iostream>
#include <vector>
#include <numeric>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<double> dvec{1.1, 0.5, 3.3};
    cout << accumulate(dvec.cbegin(), dvec.cend(), 0) << endl;

    return 0;
}