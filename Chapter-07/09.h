/*
 * Add operations to read and print Person objects to the code you wrote for the
 * exercises in § 7.1.2 (p.260).
 */

#ifndef CH07_09_H
#define CH07_09_H

#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;

struct Person {
	string get_name() const { return name; }
	string get_address() const { return address; }
	string name;
	string address;
};

istream &read(istream &is, Person &person) {
	is >> person.name >> person.address;
	return is;
}

ostream &print(ostream &os, const Person &person) {
	os << person.name << " " << person.address;
	return os;
}

#endif