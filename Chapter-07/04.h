/*
 * Write a class named Person that represents the name and address of a person.
 * Use a string to hold each of these elements. Subsequent exercises will
 * incrementally add features to this class.
 */

#ifndef CH07_04_H
#define CH07_04_H

#include <string>

using std::string;

struct Person {
	string name;
	string address;
};

#endif