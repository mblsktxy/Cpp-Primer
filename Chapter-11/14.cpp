/*
 * Extend the map of children to their family name that you wrote for the exercises
 * in § 11.2.1 (p.424) by having the vector store a pair that holds a child’s name
 * and birthday.
 */

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using std::pair;
using std::map;
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

class Families {
	using Child = pair<string, string>;
	using Children = vector<Child>;
	using Data = map<string, Children>;

public:
	void add(const string &last_name, const string &first_name, const string &birthday) {
		auto child = make_pair(first_name, birthday);
		data[last_name].push_back(child);
	}

	void print() const {
		for (const auto &pair: data) {
			cout << "Last name: " << pair.first << "\n";
			for (const auto &child: pair.second) {
				cout << "Child's first name: " << child.first << "\n"
				     << "Child's birthday: " << child.second << "\n";
			}
			cout << endl;
		}
	}

private:
	Data data;
};

int main() {
	Families families;
	string msg{"Please enter the last name, first name, and birthday:\n"};
	for (string l,f,b; cout << msg, cin >> l >> f >> b; families.add(l,f,b));
	families.print();

	return 0;
}