/*
 * Write a program to implement text queries without defining classes to manage 
 * the data. Your program should take a file and interact with a user to query
 * for words in that file. Use vector, map, and set containers to hold the data
 * for the file and to generate the results for the queries.
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using std::ifstream;
using std::vector;
using std::string;
using std::map;
using std::set;
using std::cin;
using std::cout;
using std::endl;
using std::istringstream;
using line_no = vector<string>::size_type;

int main() {
    ifstream file("story");
    vector<string> input;
    map<string, set<line_no>> wm;
    line_no lineNo{0};
    
    for (string line; getline(file, line); ++lineNo) {
        input.push_back(line);
        istringstream line_stream(line);
        for (string text, word; line_stream >> text; word.clear()) {
            remove_copy_if(text.begin(), text.end(), back_inserter(word), ispunct);
            wm[word].insert(lineNo);
        }
    }
    
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") 
            break;
        auto found = wm.find(s);
        if (found != wm.end()) {
            cout << s << " occurs " << found->second.size() 
                 << (found->second.size() > 1 ? " times" : " time") << endl;
            for (const auto &i: found->second)
                cout << "\t(line " << i+1 << ") " << input.at(i) << endl;
            cout << endl;
        } else
            cout << s << " occurs 0 time\n" << endl;
    }
}