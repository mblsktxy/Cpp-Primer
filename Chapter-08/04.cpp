/*
 * Write a function to open a file for input and read its contents into a vector of
 * strings, storing each line as a separate element in the vector.
 */

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;
using std::getline;
using std::cout;
using std::endl;

int main() {
	vector<string> svec;
	ifstream input("book_sales_revenue");
	if (input) {
		string buf;
		while(getline(input, buf))
			svec.push_back(buf);
	}
	for (const auto &str: svec)
		cout << str << endl;
	return 0;
}