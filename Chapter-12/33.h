/*
 * In Chapter 15 we’ll extend our query system and will need some additional
 * members in the QueryResult class. Add members named begin and end that return
 * iterators into the set of line numbers returned by a given query, and a member
 * named get_file that returns a shared_ptr to the file in the QueryResult object.
 */

#ifndef CH12_33_H
#define CH12_33_H

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
	using ResultIter = std::set<line_no>::iterator;
    QueryResult(std::string s,
                std::shared_ptr<std::set<line_no>> p,
                std::shared_ptr<std::vector<std::string>> f):
                sought(s), lines(p), file(f) { }
    ResultIter begin() const { return lines->begin(); }
    ResultIter end() const { return lines->end(); }
    std::shared_ptr<std::vector<std::string>> get_file() const {
    	return std::make_shared<std::vector<std::string>>(file); 
    }
private:
    std::string sought; // word this query represents
    std::shared_ptr<std::set<line_no>> lines; // lines it’s on
    std::shared_ptr<std::vector<std::string>> file; // input file
};

std::ostream& print(std::ostream &, const QueryResult&);

#endif