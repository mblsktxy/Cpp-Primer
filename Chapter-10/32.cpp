/*
 * Rewrite the bookstore problem from § 1.6 (p.24) using a vector to hold the
 * transactions and various algorithms to do the processing. Use sort with your
 * compareIsbn function from § 10.3.1 (p.387) to arrange the transactions in
 * order, and then use find and accumulate to do the sum.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "../Chapter-01/Sales_item.h"

using std::istream_iterator;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    istream_iterator<Sales_item> in_iter(cin), eof;
    vector<Sales_item> svec;
    
    while (in_iter != eof)
        svec.push_back(*in_iter++);

    sort(svec.begin(), svec.end(), compareIsbn);
    for (auto beg = svec.cbegin(), end = beg; beg != svec.cend(); beg = end) {
        end = find_if(beg, svec.cend(), [beg](const Sales_item &item)
        	                                 { return item.isbn() != beg->isbn(); });
        cout << accumulate(beg, end, Sales_item(beg->isbn())) << endl;
    }

    return 0;
}