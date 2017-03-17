/*
 * The program in this section defined its istringstream object inside the outer
 * while loop. What changes would you need to make if record were defined outside
 * that loop? Rewrite the program, moving the definition of record outside the while,
 * and see whether you thought of all the changes that are needed.
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::string;
using std::vector;
using std::getline;
using std::istringstream;
using std::cin;
using std::cout;
using std::endl;

struct PersonInfo {
	string name;
	vector<string> phones;
};

int main() {
	string line, word; // will hold a line and word from input, respectively
	vector<PersonInfo> people; // willl hold all the records from the input
	istringstream record;

	// read the input a line at a time until cin hits end-of-file (or another error)
	while (getline(cin, line)) {
		PersonInfo info; // create an object to hold this record's data
		record.clear();
		record.str(line);
		record >> info.name; // read the name
		while (record >> word) // read the phone numbers
			info.phones.push_back(word); // and store them
		people.push_back(info); // append this record to people
	}

	for (auto &p: people) {
		cout << p.name << " ";
		for (auto &ph: p.phones)
			cout << ph << " ";
		cout << endl;
	}

	return 0;
}