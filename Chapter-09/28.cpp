/*
 * Write a function that takes a forward_list<string> and two additional string
 * arguments. The function should find the first string and insert the second
 * immediately following the first. If the first string is not found, then insert
 * the second string at the end of the list.
 */

#include <iostream>
#include <forward_list>
#include <string>

using std::forward_list;
using std::string;
using std::cout;
using std::endl;

void find_and_insert(forward_list<string> &sflst, const string &to_find, const string &to_add) {
	auto before_end = sflst.before_begin();
	for (auto curr = sflst.begin(); curr != sflst.end(); ++curr) {
		if (*curr == to_find) {
			sflst.insert_after(curr, to_add);
			return;
		}
		++before_end;
	}
	sflst.insert_after(before_end, to_add);
}

int main() {
	forward_list<string> sflst{"Hello", "World", "I", "You"};
	find_and_insert(sflst, "I", "Love");
	find_and_insert(sflst, "doesnotexist", "Haha");

	for (const auto &str: sflst)
		cout << str << " ";
	cout << endl;

	return 0;
}