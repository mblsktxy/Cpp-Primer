#include <iostream>

int main() {
	int a, b, val;
	std::cout << "Enter two integers:" << std::endl;
	std::cin >> a >> b;
	if (a < b) {
		val = a;
		while (val < b) {
			std::cout << val << " "; 
			val++;
		}
		std::cout << b << std::endl;
	} else {
		val = b;
		while (val < a) {
			std::cout << val << " ";
			val++;
		}
		std::cout << a << std::endl;
	}
	return 0;
}