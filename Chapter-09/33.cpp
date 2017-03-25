/*
 * In the final example in this section what would happen if we did not assign the
 * result of insert to begin? Write a program that omits this assignment to see if
 * your expectation was correct.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto begin = ivec.begin();
    while (begin != ivec.end()) {
        ++begin;
        begin = ivec.insert(begin, 42);
        ++begin;
    }

    for (const auto &i: ivec)
        cout << i << " ";
    cout << endl;

    return 0;
}