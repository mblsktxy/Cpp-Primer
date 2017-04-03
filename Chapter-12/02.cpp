/*
 * Write your own version of the StrBlob class including the const versions of
 * front and back.
 */

#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>
#include <memory>

using std::vector;
using std::string;
using std::initializer_list;
using std::make_shared;
using std::shared_ptr;
using std::out_of_range;
using std::cout;
using std::endl;

class StrBlob {
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> i1);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	// add and remove elements
	void push_back(const string &t) {data->push_back(t);}
	void pop_back();
	// element access
	string& front();
	string& back();
	const string& front() const;
	const string& back() const;
private:
	shared_ptr<vector<string>> data;
	// throws msg is data[i] isn't valid
	void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()) { }

StrBlob::StrBlob(initializer_list<string> i1): 
					data(make_shared<vector<string>>(i1)) { }

void StrBlob::check(size_type i, const string &msg) const {
	if (i >= data->size())
		throw out_of_range(msg);
}

string& StrBlob::front() {
	// if the vector is empty, check will throw
	check(0, "front on empty StrBlob");
	return data->front();
}

string& StrBlob::back() {
	check(0, "back on empty StrBlob");
	return data->back();
}

const string& StrBlob::front() const {
	check(0, "front on empty StrBlob");
	return data->front();
}

const string& StrBlob::back() const {
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

int main() {
    const StrBlob csb{"hello", "world", "constr"};
    StrBlob sb{"hello", "world", "str"};

    cout << csb.front() << " " << csb.back() << endl;
    sb.back() = "now";
    cout << sb.front() << " " << sb.back() << endl;

    return 0;
}