/*
 * Define your own version of StrBlobPtr and update your StrBlob class with
 * the appropriate friend declaration and begin and end members.
 */

#ifndef CH12_19_H
#define CH12_19_H

#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>
#include <memory>

class StrBlobPtr;

class StrBlob {
friend class StrBlobPtr;

public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob(): data(std::make_shared<std::vector<std::string>>()) { }
    StrBlob(std::initializer_list<std::string> i1): 
        data(std::make_shared<std::vector<std::string>>(i1)) { }
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    // add and remove elements
    void push_back(const std::string &t) {
        data->push_back(t);
    }
    void pop_back() {
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
    }
    // element access
    std::string& front() {
        // if the vector is empty, check will throw
        check(0, "front on empty StrBlob");
        return data->front();
    }
    std::string& back() {
        check(0, "back on empty StrBlob");
        return data->back();
    }
    const std::string& front() const {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    const std::string& back() const {
        check(0, "back on empty StrBlob");
        return data->back();
    }
    StrBlobPtr begin();
    StrBlobPtr end();

private:
    std::shared_ptr<std::vector<std::string>> data;
    // throws msg is data[i] isn't valid
    void check(size_type i, const std::string &msg) const {
        if (i >= data->size())
        throw std::out_of_range(msg);
    }
};

// StrBlobPtr throws an exception on attempts to access a nonexistent element
class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) { }
    bool operator!=(const StrBlobPtr &p) { return p.curr != curr; }
    std::string& deref() const {
        auto p = check(curr, "dereference past end");
        return (*p)[curr]; // (*p) is the vector to which this object points
    }

    StrBlobPtr& incr() { // prefix version
        // if curr already points past the end of the container, can’t increment it
        check(curr, "increment past end of StrBlobPtr");
        ++curr; // advance the current state
        return *this;
    }

private:
    // check returns a shared_ptr to the vector if the check succeeds
    std::shared_ptr<std::vector<std::string>> check(size_t i, const std::string& msg) const {
        auto ret = wptr.lock();
        // is the vector still around?
        if (!ret)
            throw std::runtime_error("unbound StrBlobPtr");
        if (i >= ret->size())
            throw std::out_of_range(msg);
        return ret; // otherwise, return a shared_ptr to the vector
    }
    // store a weak_ptr , which means the underlying vector might be destroyed
    std::weak_ptr<std::vector<std::string>> wptr;
    size_t curr; // current position within the array
};

// these members can’t be defined until StrBlob and StrBlobPtr are defined
StrBlobPtr StrBlob::begin() {
    return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end() {
    return StrBlobPtr(*this, data->size());
}

#endif