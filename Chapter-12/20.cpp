/*
 * Write a program that reads an input file a line at a time into a StrBlob and
 * uses a StrBlobPtr to print each element in that StrBlob.
 */

#include "19.h"
#include <fstream>
#include <iostream>

using std::ifstream;
using std::string;
using std::cout;
using std::endl;

int main() {
    ifstream ifs("book_sales_revenue");
    StrBlob blob;
    for (string str; getline(ifs, str); )
        blob.push_back(str);
    for (StrBlobPtr pbegin(blob.begin()), pend(blob.end()); pbegin != pend; pbegin.incr())
        cout << pbegin.deref() << endl;

    return 0;
}