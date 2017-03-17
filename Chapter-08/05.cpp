/*
 * Rewrite the previous program to store each word in a separate element.
 */

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;
using std::cout;
using std::endl;

int main() {
	vector<string> svec;
	ifstream input("book_sales_revenue");
	if (input) {
		string buf;
		while (input >> buf)
			svec.push_back(buf);
	}
	for (const auto &str: svec)
		cout << str << endl;
	return 0;
}