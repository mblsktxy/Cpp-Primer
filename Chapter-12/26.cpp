/*
 * Rewrite the program on page 481 using an allocator.
 */

#include <iostream>
#include <string>
#include <memory>

using std::allocator;
using std::string;
using std::cin;
using std::cout;
using std::endl;

void reverse_input_string(int n) {
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    string s;
    auto q = p;
    while (q != p + n && std::cin >> s)
        alloc.construct(q++, s);
    
    while (q != p) {
        cout << *--q << " ";
        alloc.destroy(q);
    }
    cout << endl;
    alloc.deallocate(p, n);
}

int main() {
    reverse_input_string(5);
    return 0;
}