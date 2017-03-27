/*
 * Write a lambda that captures a local int variable and decrements that variable
 * until it reaches 0. Once the variable is 0 additional calls should no longer
 * decrement the variable. The lambda should return a bool that indicates whether
 * the captured variable is 0.
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
    int i = 7;
    auto check_and_decrement = [&i]() -> bool 
                                   { if (i > 0) {
                                        --i;
                                        return false;
                                     } else 
                                        return true; };
    while(!check_and_decrement())
        cout << i << " ";
    cout << endl;

    return 0;
}