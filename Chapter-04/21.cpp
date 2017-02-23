/*
 * Write a program to use a conditional operator to find the elements in a vector<int>
 * that have odd value and double the value of each such element.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
	vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for(auto i : ivec)
		cout << ((i % 2) ? i*2 : i) << " ";
	cout << endl; 

	return 0;
}