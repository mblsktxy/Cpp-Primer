/*
 * Using pointers, write a program to set the elements in an array to zero.
 */

#include <iostream>
#include <iterator>

using std::end;
using std::cout;
using std::endl;

int main() {
    const int size = 10;
    int arr[size];
    for (auto ptr = arr; ptr != end(arr); ptr++)
    	*ptr = 0;

    for (auto i : arr)
    	cout << i << " ";
    cout << endl;

    return 0;
}