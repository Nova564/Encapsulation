#include <iostream>

int main() {
	int a = 0;
	int* p_int = &a;
	std::cout << "A a une valeur de : " << a << std::endl;
	std::cout << "L'adresse de A est : " << p_int << std::endl;
}