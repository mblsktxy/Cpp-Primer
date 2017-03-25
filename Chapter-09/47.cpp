/*
 * Write a program that finds each numeric character and then each alphabetic
 * character in the string "ab2c3d7R4E6". Write two versions of the program.
 * The first should use find_first_of, and the second find_first_not_of.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main() {
    string numbers{"0123456789"};
    string alphabets{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string str{"ab2c3d7R4E6"};

    // find_first_of
    string::size_type pos = 0;
    while ((pos = str.find_first_of(numbers, pos)) != string::npos) {
        cout << "Find number at index: " << pos
        	 << ", element is " << str[pos] << endl;
        ++pos;
    }
    cout << endl;
    pos = 0;
    while ((pos = str.find_first_of(alphabets, pos)) != string::npos) {
        cout << "Find alphabetic character at index: " << pos
        	 << ", element is " << str[pos] << endl;
        ++pos;
    }

    // find_first_not_of
    cout << endl;
    pos = 0;
    while ((pos = str.find_first_not_of(alphabets, pos)) != string::npos) {
        cout << "Find number at index: " << pos
        	 << ", element is " << str[pos] << endl;
        ++pos;
    }
    cout << endl;
    pos = 0;
    while ((pos = str.find_first_not_of(numbers, pos)) != string::npos) {
        cout << "Find alphabetic character at index: " << pos
        	 << ", element is " << str[pos] << endl;
        ++pos;
    }    

    return 0;
}