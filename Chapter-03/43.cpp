/*
 * Write three different versions of a program to print the elements of ia. One version
 * should use a range for to manage the iteration, the other two should use an ordinary
 * for loop in one case using subscripts and in the other using pointers. In all three
 * programs write all the types directly. That is, do not use a type alias, auto, or
 * decltype to simplify the code.
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
    int arr[3][4] = { 
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    // range for
    for (int (&row)[4] : arr)
    	for (int col : row)
    		cout << col << " ";
    cout << endl;

    // for loop using subscripts
    for (size_t i = 0; i != 3; i++)
    	for (size_t j = 0; j != 4; j++)
    		cout << arr[i][j] << " ";
    cout << endl;

    // for loop using pointers
    for (int (*row)[4] = arr; row != arr + 3; row++)
    	for (int *col = *row; col != *row + 4; col++)
    		cout << *col << " ";
    cout << endl;
    
    return 0;
}
