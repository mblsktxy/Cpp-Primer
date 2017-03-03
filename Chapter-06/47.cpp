/*
 * Revise the program you wrote in the exercises in § 6.3.2 (p.228) that used
 * recursion to print the contents of a vector to conditionally print information
 * about its execution. For example, you might print the size of the vector on each
 * call. Compile and run the program with debugging turned on and again with it
 * turned off.
 */

#include <iostream>
#include <vector>

#define NDEBUG

using std::vector; 
using std::cout;
using std::endl;

void print(vector<int>::iterator first, vector<int>::iterator last) {
#ifndef NDEBUG
	cout << "Vector size: " << last - first << endl;
#endif
    if (first != last) {
        cout << *first << ' ';
        print(++first, last);
    } else
    	return;
}

int main()
{
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(vec.begin(), vec.end());
    cout << endl;

    return 0;
}
