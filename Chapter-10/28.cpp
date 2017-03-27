/*
 * Copy a vector that holds the values from 1 to 9 inclusive, into three other
 * containers. Use an inserter, a back_inserter, and a front_inserter, respectivly
 * to add elements to these containers. Predict how the output sequence varies by
 * the kind of inserter and verify your predictions by running your programs.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // uses inserter
    list<int> ilst1;
    copy(ivec.cbegin(), ivec.cend(), inserter(ilst1, ilst1.begin()));
    for (const auto &i: ilst1) 
   		cout << i << " ";
   	cout << endl;
    
    // uses back_inserter
    list<int> ilst2;
    copy(ivec.cbegin(), ivec.cend(), back_inserter(ilst2));
    for (const auto &i: ilst2)
    	cout << i << " ";
    cout << endl;
    
    // uses front_inserter
    list<int> ilst3;
    copy(ivec.cbegin(), ivec.cend(), front_inserter(ilst3));
    for (const auto &i: ilst3)
    	cout << i << " ";
    cout << endl;

    return 0;
}