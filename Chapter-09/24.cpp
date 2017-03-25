/*
 * Write a program that fetches the first element in a vector using at, the subscript
 * operator, front, and begin. Test your program on an empty vector.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> v{1, 2, 3};
    cout << v.at(0) << endl;
    cout << v[0] << endl;
    cout << v.front() << endl;
    cout << *v.begin() << endl;
    return 0;
}
