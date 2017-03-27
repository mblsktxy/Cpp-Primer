/*
 * Update the program from the previous exercise so that it prints only the unique
 * elements. Your program should use unqiue_copy (§ 10.4.1, p.403).
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using std::istream_iterator;
using std::ostream_iterator;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> ivec;
    while (in_iter != eof)
        ivec.push_back(*in_iter++);

    sort(ivec.begin(), ivec.end());
    unique_copy(ivec.cbegin(), ivec.cend(), out_iter);
    cout << endl;

    return 0;
}