/*
 * The TextQuery and QueryResult classes use only capabilities that we have 
 * already covered. Without looking ahead, write your own versions of these
 * classes.
 */

#ifndef CH12_27_H
#define CH12_27_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <memory>

using line_no = std::vector<std::string>::size_type;

class QueryResult; // declaration needed for return type in the query function

class TextQuery {
public:
    TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;
private:
    std::shared_ptr<std::vector<std::string>> file; // input file
    // map of each word to the set of the lines in which that word appears
    std::map<std::string,
             std::shared_ptr<std::set<line_no>>> wm;
};

class QueryResult {
friend std::ostream& print(std::ostream&, const QueryResult&);
public:
    QueryResult(std::string s,
                std::shared_ptr<std::set<line_no>> p,
                std::shared_ptr<std::vector<std::string>> f):
                sought(s), lines(p), file(f) { }
private:
    std::string sought; // word this query represents
    std::shared_ptr<std::set<line_no>> lines; // lines it’s on
    std::shared_ptr<std::vector<std::string>> file; // input file
};

std::ostream& print(std::ostream&, const QueryResult&);

#endif