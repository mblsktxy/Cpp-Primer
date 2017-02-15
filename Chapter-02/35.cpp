#include <iostream>
#include <typeinfo>

int main() {
	const int i = 42;
	auto j = i; // j is int
	const auto &k = i; // k is const int&
	auto *p = &i; // p is const int*
	const auto j2 = i, &k2 = i; // j2 is const int, k2 is const int&

	std::cout << "j is " << typeid(j).name() << "\n"
			  << "k is " << typeid(k).name() << "\n"
			  << "p is " << typeid(p).name() << "\n"
			  << "j2 is " << typeid(j2).name() << "\n"
			  << "k2 is " << typeid(k2).name() << std::endl;

	return 0;
}