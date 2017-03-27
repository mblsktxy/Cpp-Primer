/*
 * Write a program using stream iterators to read a text file into a vector of strings.
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using std::ifstream;
using std::istream_iterator;
using std::ostream_iterator;
using std::vector;
using std::string;
using std::cout;

int main() {
	ifstream ifs("book_sales_revenue");
	istream_iterator<string> in(ifs), eof;
	ostream_iterator<string> out(cout, "\n"); 
	vector<string> svec;
	copy(in, eof, back_inserter(svec));

	for (const auto &i: svec)
		out = i;

	return 0;
}