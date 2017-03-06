/*
 * Provide operations in your Person class to return the name and address.
 * Should these functions be const? Explain your choice.
 */

#ifndef CH07_05_H
#define CH07_05_H

#include <string>

using std::string;

struct Person {
	string get_name() const { return name; }
	string get_address() const { return address; }
	string name;
	string address;
};

#endif