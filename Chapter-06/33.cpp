/*
 * Write a recursive function to print the contents of a vector.
 */

#include <iostream>
#include <vector>

using std::vector; 
using std::cout;
using std::endl;

void print(vector<int>::iterator first, vector<int>::iterator last) {
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