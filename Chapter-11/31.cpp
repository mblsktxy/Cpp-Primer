/*
 * Write a program that defines a multimap of authors and their works. Use find
 * to find an element in the multimap and erase that element. Be sure your program
 * works correctly if the element you look for is not in the map.
 */

#include <iostream>
#include <map>
#include <string>

using std::string;
using std::multimap;
using std::cout;
using std::endl;

int main() {
	multimap<string, string> author_work{{"Barth, John", "Sot-Weed Factor"},
									 	 {"Barth, John", "Lost in the Funhouse"}};
	string author{"Barth, John"};
	string work{"Sot-Weed Factor"};

	auto found = author_work.find(author);
	auto count = author_work.count(author);
	while (count) {
		if (found->second == work) {
			author_work.erase(found);
			break;
		}
		++found;
		--count;
	}
	for (const auto &i: author_work)
		cout << i.first << ": " << i.second << endl;

	return 0;
}