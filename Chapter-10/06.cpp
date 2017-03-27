/*
 * Using fill_n, write a program to set a sequence of int values to 0.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::fill_n;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fill_n(ivec.begin(), ivec.size(), 0);

    for (const auto &i: ivec)
        cout << i << " ";
    cout << endl;

    return 0;
}