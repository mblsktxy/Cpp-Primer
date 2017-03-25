/*
 * Write a program to copy elements from a list<int> into two deques. The even-valued
 * elements should go into one deque and the odd ones into the other.
 */

#include <iostream>
#include <list>
#include <deque>

using std::list;
using std::deque;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    list<int> ilst{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> odd, even;
    for (const auto &i: ilst)
        (i & 0x1 ? odd : even).push_back(i);

    for (const auto &i: odd)
    	cout << i << " ";
    cout << endl;
    for (const auto &i: even)
    	cout << i << " ";
    cout << endl;

    return 0;
}