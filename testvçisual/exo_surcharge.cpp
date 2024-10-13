#include <iostream>
#include "Integer.h"

int main() {
    Integer a(10);
    Integer b(0);
    Integer c;

    c = a + b;
    std::cout << "a + b = " << c << std::endl;

    c = a - b;
    std::cout << "a - b = " << c << std::endl;

    c = a * b;
    std::cout << "a * b = " << c << std::endl;

    c = a / b;
    std::cout << "a / b = " << c << std::endl;

    c = a % b;
    std::cout << "a % b = " << c << std::endl;

    a += b;
    std::cout << "a += b -> a = " << a << std::endl;

    a -= b;
    std::cout << "a -= b -> a = " << a << std::endl;

    a *= b;
    std::cout << "a *= b -> a = " << a << std::endl;

    a /= b;
    std::cout << "a /= b -> a = " << a << std::endl;

    a %= b;
    std::cout << "a %= b -> a = " << a << std::endl;

    Integer pow_result = a.pow(3);
    std::cout << "a^3 = " << pow_result << std::endl;

    return 0;
}
