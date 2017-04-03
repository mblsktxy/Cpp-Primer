#include "30.h"
#include <sstream>
#include <algorithm>

using std::ifstream;
using std::vector;
using std::string;
using std::istringstream;
using std::set;
using std::shared_ptr;
using std::ostream;
using std::endl;

// read the input file and build the map of lines to line numbers
TextQuery::TextQuery(ifstream &is): file(new vector<string>) {
    string text;
    while (getline(is, text)) { // for each line in the file
        file->push_back(text); // remember this line of text
        int n = file->size() - 1; // the current line number
        istringstream line(text); // separate the line into words
        string word;
        string word_cleaned;
        while (line >> word) { // for each word in that line
            remove_copy_if(word.begin(), word.end(), back_inserter(word_cleaned), ispunct);
            // std::cout << word_cleaned << std::endl;
            // if word isn’t already in wm , subscripting adds a new entry
            auto &lines = wm[word_cleaned]; // lines is a shared_ptr
            if (!lines) // that pointer is null the first time we see word
                lines.reset(new set<line_no>); // allocate a new set
            lines->insert(n); // insert this line number
            word_cleaned.clear();
        }
    }
}

QueryResult
TextQuery::query(const string &sought) const {
    // we’ll return a pointer to this set if we don’t find sought
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    // use find and not a subscript to avoid adding words to wm !
    auto loc = wm.find(sought);
    if (loc == wm.end())
        return QueryResult(sought, nodata, file); // not found
    else
        return QueryResult(sought, loc->second, file);
}

string make_plural(size_t ctr, const string &word, const string &ending = "s") {
    return (ctr > 1) ? word + ending : word;
}

ostream &print(ostream & os, const QueryResult &qr) {
    // if the word was found, print the count and all occurrences
    os << qr.sought << " occurs " << qr.lines->size() << " "
       << make_plural(qr.lines->size(), "time", "s") << endl;
    // print each line in which the word appeared
    for (auto num : *qr.lines) // for every element in the set
        // don’t confound the user with text lines starting at 0
        os << "\t(line " << num + 1 << ") "
           << *(qr.file->begin() + num) << endl;
    return os;
}