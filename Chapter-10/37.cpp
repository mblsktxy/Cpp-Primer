/*
 * Given a vector that has ten elements, copy the elements from positions 3
 * through 7 in reverse order to a list.
 */

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main() {
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> ret_lst(8 - 3);
    copy(vec.cbegin() + 3, vec.cbegin() + 8, ret_lst.rbegin());

    for (const auto &i: ret_lst) 
        cout << i << " ";
    cout << endl;

    return 0;
}