/*
 * Use reverse_iterators to print a vector in reverse order.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto rit = ivec.crbegin(); rit != ivec.crend(); ++rit)
        cout << *rit << " ";
    cout << endl;

    return 0;
}