/*
 * Determine whether any of your Person class constructors should be explicit.
 */

#ifndef CH07_50_H
#define CH07_50_H

#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;

class Person {
friend istream &read(istream &, Person &);
friend ostream &print(ostream &, const Person &);

public:
	Person() = default;
	Person(const string &sname, const string &saddr): name(sname), address(saddr) { }
	explicit Person(istream &is) { read(is, *this); }

	string get_name() const { return name; }
	string get_address() const { return address; }

private:	
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