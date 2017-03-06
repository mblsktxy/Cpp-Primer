/*
 * Add constructors to your Sales_data class and write a program to use each
 * of the constructors. 
 */

#ifndef CH07_11_H
#define CH07_11_H

#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;

struct Sales_data {
	Sales_data() = default;
	Sales_data(const string &s): bookNo(s) { }
	Sales_data(const string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(n*p) { }
	Sales_data(istream &is);

	string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data &);

	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0; 
};

// nonmember functions
istream &read(istream &is, Sales_data &item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue;
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

// member functions
Sales_data::Sales_data(istream &is) {
	read(is, *this);
}

Sales_data &Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

#endif