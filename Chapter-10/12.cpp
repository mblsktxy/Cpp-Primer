/*
 * Write a function named compareIsbn that compares the isbn() members of two
 * Sales_data objects. Use that function to sort a vector that holds Sales_data
 * objects.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include "../Chapter-07/26.h" // Sales_data class.

using std::vector;
using std::cout;
using std::endl;

bool compareIsbn(const Sales_data &sd1, const Sales_data &sd2) {
    return sd1.isbn().size() < sd2.isbn().size();
}

int main() {
    Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
    vector<Sales_data> v{d1, d2, d3, d4, d5};
    sort(v.begin(), v.end(), compareIsbn);

    for(const auto &element: v)
        cout << element.isbn() << " ";
    cout << endl;

    return 0;
}