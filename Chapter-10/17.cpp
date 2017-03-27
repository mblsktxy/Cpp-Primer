/*
 * Rewrite exercise 10.12 from § 10.3.1 (p.387) to use a lambda in the call to sort
 * instead of the compareIsbn function.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include "../Chapter-07/26.h" // Sales_data class

using std::vector;
using std::cout;
using std::endl;

int main() {
    Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
    vector<Sales_data> v{d1, d2, d3, d4, d5};
    sort(v.begin(), v.end(), 
    	 [](const Sales_data &sd1, const Sales_data &sd2)
    	   { return sd1.isbn().size() < sd2.isbn().size(); });

    for(const auto &element: v)
        cout << element.isbn() << " ";
    cout << endl;

    return 0;
}