/*
 * Rewrite the bookstore program from § 7.1.1 (p.256) to read its transactions from
 * a file. Pass the name of the file as an argument to main (§ 6.2.5, p.218).
 */

#include <fstream>
#include <iostream>
#include "../Chapter-07/26.h"

using std::ifstream;
using std::cout;
using std::endl;
using std::cerr;

int main(int argc, char **argv)
{
    ifstream input(argv[1]);
    
    Sales_data total;
    if (read(input, total)) {
    	Sales_data trans;
        while (read(input, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    
    return 0;
}