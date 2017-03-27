/*
 * Now print the elements in reverse order using ordinary iterators.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto rit = ivec.cend()-1; ; --rit) {
        cout << *rit << " ";
        if (rit == ivec.cbegin())
            break;
    }
    cout << endl;

    return 0;
}