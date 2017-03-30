/*
 * Rewrite the map that stored vectors of children’s names with a key that is
 * the family last name for the exercises in § 11.2.1 (p.424) to use a multimap.
 */

#include <iostream>
#include <string>
#include <map>

using std::multimap;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	multimap<string, string> families;
	for (string lname, cname; cin >> lname >> cname; families.emplace(lname, cname));
	for (const auto &family: families)
		cout << "Last name: " << family.first << "\n"
			 << "Children's names: " << family.second << endl;

	return 0; 
}