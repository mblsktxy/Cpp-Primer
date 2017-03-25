/*
 * Repeat the previous program, but compare elements in a list<int> to a 
 * vector<int>.
 */

#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main() {
    list<int> ilst{1, 2, 3, 4, 5};
    vector<int> ivec1{1, 2, 3, 4, 5};
    vector<int> ivec2{1, 2, 3, 4};

    vector<int> ivec(ilst.begin(), ilst.end());
    cout << (ivec == ivec1 ? "True" : "False") << std::endl;
    cout << (ivec == ivec2 ? "True" : "False") << std::endl;

    return 0;
}