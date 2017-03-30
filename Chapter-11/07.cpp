/*
 * Define a map for which the key is the family’s last name and the value is a 
 * vector of the children’s names. Write code to add new families and to add new
 * children to an existing family.
 */

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using std::map;
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using Families = map<string, vector<string>>;

Families make_families() {
    Families families;
    for (string ln; cout << "Last name:\n", cin >> ln && ln != "@q";)
        for (string cn; cout << "|-Children's names:\n", cin >> cn && cn != "@q";)
            families[ln].push_back(cn);
    return families;
}

void print(Families const& families) {
    for (const auto &family: families) {
    	cout << "Last name: " << family.first << "\n";
    	cout << "Children's names: ";
        for (const auto &child: family.second)
            cout << child << " ";
        cout << endl;
    }
}

int main() {
    print(make_families());
    return 0;
}