/*
 * Assuming vi is a container of ints that includes even and odd values, predict
 * the behavior of the following loop. After you’ve analyzed this loop, write a
 * program to test whether your expectations were correct.
 *     iter = vi.begin();
 *     while (iter != vi.end())
 *         if (*iter % 2)
 *             iter = vi.insert(iter, *iter);
 *         ++iter;
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> vi{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while (iter != vi.end()) {
    	if (*iter % 2) {
    		iter = vi.insert(iter, *iter);
    	    iter += 2;
    	} else
    		++iter;
	}
	   
    for (const auto &i: vi)
        cout << i << " ";
    cout << endl;

    return 0;
}