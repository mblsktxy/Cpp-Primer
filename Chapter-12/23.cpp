/*
 * Write a program to concatenate two string literals, putting the result in a 
 * dynamically allocated array of char. Write a program to concatenate two library
 * strings that have the same value as the literals used in the first program. 
 */

#include <iostream>
#include <string>
#include <string.h>

using std::string;
using std::cout;
using std::endl;

int main() {
    // dynamically allocated array of char
    char *str = new char[strlen("hello world")]();
    strcat(str, "hello ");
    strcat(str, "world");
    cout << str << endl;
    delete [] str;
    
    // std::string
    string str1{"hello "}, str2{"world"};
    cout << str1 + str2 << endl;

    return 0;
}