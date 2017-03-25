/*
 * Write a program to explore how vectors grow in the library you use.
 */

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    vector<string> svec;
    for (string buffer; cin >> buffer; svec.push_back(buffer)) {
    	cout << "svec.size: " << svec.size() << endl;
        cout << "svec.capacity: " << svec.capacity() << endl;
    }

    return 0;
}