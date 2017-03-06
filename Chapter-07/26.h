/*
 * Define Sales_data::avg_price as an inline function.
 */

#ifndef CH07_26_H
#define CH07_26_H

#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;

class Sales_data {
friend istream &read(istream &, Sales_data &);
friend ostream &print(ostream &, const Sales_data &);
friend Sales_data add(const Sales_data &, const Sales_data &);

public:
	Sales_data() = default;
	Sales_data(const string &s): bookNo(s) { }
	Sales_data(const string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(n*p) { }
	Sales_data(istream &is) { read(is, *this); }

	string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data &);

private:
	double avg_price() const;

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0; 
};

// member functions
Sales_data &Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

inline
double Sales_data::avg_price() const {
	return units_sold ? revenue / units_sold : 0;
}

// friend functions
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

#endif