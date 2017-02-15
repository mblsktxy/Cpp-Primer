#include <iostream>

int main() {
	const int v2 = 0;
	int v1 = v2;
	int &r1 = v1;
	r1 = v2;
	std::cout << r1 << std::endl;
}