#include <iostream>

int main() {
	int sum = 0, val = 10;
	while (val >= 0) {
		sum += val;
		val --;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
			  << sum << std::endl;
	return 0;
}