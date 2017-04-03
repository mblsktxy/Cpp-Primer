/*
 * Write a function that returns a dynamically allocated vector of ints. Pass that
 * vector to another function that reads the standard input to give values to the
 * elements. Pass the vector to another function to print the values that were read.
 * Remember to delete the vector at the appropriate time.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

vector<int> *create() {
	return new vector<int>();
}

void *populate(vector<int> *ptr) {
	for (int i; cin >> i; ptr->push_back(i));
}

void print(vector<int> *ptr) {
	for (const auto &i: *ptr)
		cout << i << " ";
	// for (auto i = ptr->begin(); i != ptr->end(); ++i)
	// 	cout << *i << " ";
	cout << endl; 
}

int main() {
	vector<int> *p = create();
	populate(p);
	print(p);
	delete p;

	return 0;
}