/*
 * The program on page 354 to remove even-valued elements and duplicate odd
 * ones will not work on a list or forward_list. Why? Revise the program so
 * that it works on these types as well.
 */

#include <iostream>
#include <list>
#include <forward_list>

using std::list;
using std::forward_list;
using std::cout;
using std::endl;

int main() {
	list<int> ilst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto iter1 = ilst.begin();
	while (iter1 != ilst.end()) {
		if (*iter1 % 2) {
			iter1 = ilst.insert(iter1, *iter1);
			++iter1;
			++iter1;
		} else
			iter1 = ilst.erase(iter1);
	}

	forward_list<int> iflst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto iter2 = iflst.begin();
	auto prev = iflst.before_begin();
	while (iter2 != iflst.end()) {
		if (*iter2 % 2) {
			iter2 = iflst.insert_after(iter2, *iter2);
			++iter2;
			++prev;
			++prev;
		} else 
			iter2 = iflst.erase_after(prev);
	}
 
	for (const auto &i: ilst)
		cout << i << " ";
	cout << endl;
	for (const auto &i: iflst)
		cout << i << " ";
	cout << endl;

	return 0;
}