/*
 * Write a program that initializes a string from a vector<char>.
 */

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl; 

int main() {
    vector<char> cvec{'h', 'a', 'p', 'p', 'y'};
    string str(cvec.cbegin(), cvec.cend());
    cout << str << endl;

    return 0;
}