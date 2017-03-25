/*
 * Write a program to assign the elements from a list of char* pointers to C-style
 * character strings to a vector of strings.
 */

#include <iostream>
#include <string>
#include <vector>
#include <list>

using std::string;
using std::vector;
using std::list;
using std::cout;
using std::endl;

int main() {
    list<const char*> authors{"Milton", "Shakespeare", "Austen"};
    vector<string> svec;
    svec.assign(authors.cbegin(), authors.cend());
    for (const auto &name: svec)
        cout << name << " ";
    cout << endl;

    return 0;
}