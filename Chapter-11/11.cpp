/*
 * Redefine bookstore without using decltype.
 */

#include <set>
#include "../Chapter-07/26.h"

using std::multiset;
bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
	return lhs.isbn() < rhs.isbn();
}

int main() {
	multiset<Sales_data, bool(*)(const Sales_data&, const Sales_data&)> 
		bookstore(compareIsbn);

	return 0;
}