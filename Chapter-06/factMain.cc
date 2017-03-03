/*
 * Write your own versions of the fact.cc and factMain.cc files. These files should
 * include your Chapter6.h from the exercises in the previous section. Use these
 * files to understand how your compiler supports separate compilation.
 */

#include <iostream>
#include "Chapter6.h"

using std::cout;
using std::endl;

int main() {
	cout << "Factorial of 5 is " << fact(5) << endl;
}