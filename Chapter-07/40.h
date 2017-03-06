/*
 * Choose one of the following abstractions (or an abstraction of your own
 * choosing). Determine what data are needed in the class. Provide an appropriate
 * set of constructors. Explain your decisions.
 *     (a) Book    (b) Date    (c) Employee
 *     (d) Vehicle (e) Object  (f) Tree
 */

#ifndef CH07_40_H
#define CH07_40_H

#include <istream>
#include <string>

using std::istream;
using std::string;

class Book {
public:
	Book(const string &sisbn, const string &sname, const string &sauthor, const string &spubdate):
		isbn(sisbn), name(sname), author(sauthor), pubdate(spubdate) { }
	Book(istream &is) { is >> isbn >> name >> author >> pubdate; } 

private:
	string isbn;
	string name;
	string author;
	string pubdate;
};

#endif