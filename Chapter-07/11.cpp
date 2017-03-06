/*
 * Add constructors to your Sales_data class and write a program to use each
 * of the constructors. 
 */

#include "11.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
	Sales_data item1;
	print(cout, item1) << endl;
	Sales_data item2("0-201-70353-X");
	print(cout, item2) << endl;
	Sales_data item3("0-201-70353-X", 4, 24.99);
	print(cout, item3) << endl;
	Sales_data item4(cin);
	print(cout, item4) << endl;

	return 0;
}