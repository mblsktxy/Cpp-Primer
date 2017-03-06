/*
 * Rewrite your own version of the Sales_data class to use delegating constructors.
 * Add a statement to the body of each of the constructors that prints a message
 * whenever it is executed. Write declarations to construct a Sales_data object in
 * every way possible. Study the output until you are certain you understand the order
 * of execution among delegating constructors.
 */

#include "41.h"

using std::cout;
using std::cin;

int main() {
	cout << "Default way:\n";
	Sales_data item1;
	cout << "\nOnly pass a string:\n";
	Sales_data item2("0-201-70353-X");
	cout << "\nComplete initialization:\n";
	Sales_data item3("0-201-70353-X", 4, 24.99);
	cout << "\nUse istream\n";
	Sales_data item4(cin);

	return 0;
}