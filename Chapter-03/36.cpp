/*
 * Write a program to compare two arrays for equality. Write a similar program
 * to compare two vectors.
 */


#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;

bool array_compare(int *pb1, int *pe1, int *pb2, int *pe2) {
	if ((pe1 - pb1) != (pe2 - pb2))
		return false;
	else
		for (int *i = pb1, *j = pb2; i != pe1 && j != pe2; i++, j++)
			if (*i != *j)
				return false;

	return true;
}

int main() {
	// array
	int arr1[3] = {0, 1, 2};
	int arr2[3] = {0, 1, 3};

	if (array_compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
		cout << "The two arrays are equal" << endl;
	else 
		cout << "The two arrays are not equal" << endl;

    // vector
    vector<int> vec1{0, 1, 2};
    vector<int> vec2{0, 1, 3};

    if (vec1 == vec2)
    	cout << "The two vectors are euqal" << endl;
    else
    	cout << "The two vectors are not equal" << endl;

    return 0;
}