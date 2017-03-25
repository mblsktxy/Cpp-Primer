/*
 * Use a stack to process parenthesized expressions. When you see an open 
 * parenthesis, note that it was seen. When you see a close parenthesis after
 * an open parenthesis, pop elements down to and including the open parenthesis
 * off the stack. push a value onto the stack to indicate that a parenthesized
 * expression was replaced.
 */

#include <iostream>
#include <string>
#include <stack>

using std::string;
using std::stack;
using std::cout;
using std::endl;

int main() {
    string expression{"Hello World(012)"};
    bool bSeen = false;
    stack<char> stk;

    for (const auto &s: expression) {
        if (s == '(') {
        	bSeen = true;
        	continue;
        }
        else if (s == ')')
        	bSeen = false;
        
        if (bSeen) 
        	stk.push(s);
    }
    
    string repstr;
    while (!stk.empty()) {
        repstr += stk.top();
        stk.pop();
    }
    
    expression.replace(expression.find("(")+1, repstr.size(), repstr);
    cout << expression << endl;
    
    return 0;
}