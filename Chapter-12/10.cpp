/*
 * Explain whether the following call to the process function defined on page
 * 464 is correct. If not, how would you correct the call?
 *     shared_ptr<int> p(new int(42));
 *     process(shared_ptr<int>(p));
 */

#include <iostream>
#include <memory>

using std::shared_ptr;
using std::cout;
using std::endl;

void process(shared_ptr<int> ptr) {
    cout << "Inside the process function: " << ptr.use_count() << endl;
}

int main() {
    shared_ptr<int> p(new int(42));
    process(shared_ptr<int>(p));

    // codes below shows how the reference count change.
    cout << p.use_count() << "\n";
    auto q = p;
    cout << p.use_count() << "\n";
    cout << q.use_count() << "\n";
    cout << "p now points to: " << *p << "\n";
    return 0;
}