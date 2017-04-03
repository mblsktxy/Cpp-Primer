/*
 * Redo the previous exercise, this time using shared_ptr.
 */

#include <iostream>
#include <vector>
#include <memory>

using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::cin;
using std::cout;
using std::endl;

shared_ptr<vector<int>> create() {
	return make_shared<vector<int>>();
}

void populate(shared_ptr<vector<int>> ptr) {
	for (int i; cin >> i; ptr->push_back(i));
}

void print(shared_ptr<vector<int>> ptr) {
	for (const auto &i: *ptr)
		cout << i << " ";
	cout << endl;
}

int main() {
	shared_ptr<vector<int>> p = create();
	populate(p);
	print(p);

	return 0;
}