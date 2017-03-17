/*
 * Write a program to store each line from a file in a vector<string>. Now use
 * an istringstream to read each element from the vector a word at a time.
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
    ifstream ifs("book_sales_revenue");
    if (!ifs) {
        cerr << "No data?" << endl;
        return -1;
    }
    
    vector<string> svec;
    string line;
    while (getline(ifs, line))
        svec.push_back(line);
    
    for (const auto &s: svec) {
        istringstream iss(s);
        string word;
        while (iss >> word)
            cout << word << endl;
    }
    
    return 0;
}