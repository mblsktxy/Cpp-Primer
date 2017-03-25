/*
 * Write a program to determine whether two vector<int>s are equal.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> ivec1{1, 2, 3, 4, 5};
    vector<int> ivec2{1, 2, 3, 4, 5};
    vector<int> ivec3{1, 2, 3, 4};

    cout << (ivec1 == ivec2 ? "True" : "False") << endl;
    cout << (ivec1 == ivec3 ? "True" : "False") << endl;

    return 0;
}