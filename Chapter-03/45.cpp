/*
 * Rewrite the programs again, this time using auto.
 */

#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main() {
    int arr[3][4] = {
    	{0, 1, 2, 3}, 
    	{4, 5, 6, 7}, 
    	{8, 9, 10, 11}
    };

    for (auto &p : arr)
        for (int q : p)
            cout << q << " ";
	cout << endl;

    for (auto p = arr; p != arr + 3; p++)
		for (auto q = *p; q != *p + 4; ++q)
			cout << *q << " ";
	cout << endl;

	for (auto p = begin(arr); p != end(arr); ++p)
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << " ";
	cout << endl;

	return 0;
}