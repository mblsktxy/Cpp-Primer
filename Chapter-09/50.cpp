/*
 * Write a program to process a vector<string>s whose elements represent integral
 * values. Produce the sum of all the elements in that vector. Change the program
 * so that it sums of strings that represent floating-point values.
 */

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int sum_for_int(vector<string> &v) {
    int sum = 0;
    for (const auto &s: v)
        sum += stoi(s);
    return sum;
}

float sum_for_float(vector<string> &v) {
    float sum = 0.0;
    for (const auto &s: v)
        sum += stof(s);
    return sum;
}

int main()
{
    vector<string> svec{"1", "2", "3", "4.5"};
    cout << sum_for_int(svec) << endl;
    cout << sum_for_float(svec) << endl;

    return 0;
}