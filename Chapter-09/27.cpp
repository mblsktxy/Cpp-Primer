/*
 * Write a program to find and remove the odd-valued elements in a forward_list<int>.
 */

#include <iostream>
#include <forward_list>

using std::forward_list;
using std::cout;
using std::endl;

int main() {
	forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto prev = flst.before_begin(); // denotes element "off the start" of flst
	auto curr = flst.begin(); // denotes the first element in flst
	while (curr != flst.end()) { // while there are still elements to process
		if (*curr % 2) // if the element is odd
			curr = flst.erase_after(prev); // erase it and move curr
		else {
			prev = curr; // move the iterators to denote the next
			++curr; // element and one before the next element
		}
	}

	for (const auto i: flst)
		cout << i << " ";
	cout << endl;

	return 0;
}