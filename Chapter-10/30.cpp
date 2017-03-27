/*
 * Use stream iterators, sort, and copy to read a sequence of integers from the
 * standard input, sort them, and then write them back to the standard output.
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
    copy(ivec.cbegin(), ivec.cend(), out_iter);
    cout << endl;

    return 0;
}