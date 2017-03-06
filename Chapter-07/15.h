/*
 * Add appropriate constructors to your Person class.
 */

#ifndef CH07_15_H
#define CH07_15_H

#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;

struct Person;
istream &read(istream &, Person &);

struct Person {
	Person() = default;
	Person(const string &sname, const string &saddr): name(sname), address(saddr) { }
	Person(istream &is) { read(is, *this); }

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