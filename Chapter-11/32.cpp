/*
 * Using the multimap from the previous exercise, write a program to print the
 * list of authors and their works alphabetically.
 */

#include <iostream>
#include <map>
#include <string>
#include <set>

using std::string;
using std::multimap;
using std::map;
using std::multiset;
using std::cout;
using std::endl;

int main() {
	multimap<string, string> author_work{{"J. K. Rowling", "Harry Potter"},
										 {"Barth John", "Sot-Weed Factor"},
									 	 {"Barth John", "Lost in the Funhouse"}};
    map<string, multiset<string>> author_ordered;
    for (const auto &aw: author_work)
    	author_ordered[aw.first].insert(aw.second);

    for (const auto &as: author_ordered) {
    	cout << as.first << ": ";
    	for (const auto &w: as.second)
    		cout << w << "  ";
    	cout << endl;
    }

	return 0;
}