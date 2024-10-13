#include <iostream>

class Integer {
private:
    int value;

public:
    Integer() : value(0) {}

    Integer(int val) : value(val) {}

    Integer& operator+=(const Integer& other) {
        value += other.value;
        return *this;
    }

    Integer operator+(const Integer& other) const {
        return Integer(value + other.value);
    }

    Integer& operator-=(const Integer& other) {
        value -= other.value;
        return *this;
    }

    Integer operator-(const Integer& other) const {
        return Integer(value - other.value);
    }

    Integer& operator*=(const Integer& other) {
        value *= other.value;
        return *this;
    }

    Integer operator*(const Integer& other) const {
        return Integer(value * other.value);
    }

    Integer& operator/=(const Integer& other) {
        if (other.value != 0) {
            value /= other.value;
        }
        else {
            std::cerr << "Division par zero" << std::endl;
        }
        return *this;
    }

    Integer operator/(const Integer& other) const {
        if (other.value != 0) {
            return Integer(value / other.value);
        }
        else {
            std::cerr << "Division par zero" << std::endl;
            return Integer(0);
        }
    }

    Integer& operator%=(const Integer& other) {
        if (other.value != 0) {
            value %= other.value;
        }
        else {
            std::cerr << "Modulo par zero" << std::endl;
        }
        return *this;
    }

    Integer operator%(const Integer& other) const {
        if (other.value != 0) {
            return Integer(value % other.value);
        }
        else {
            std::cerr << "Modulo par zero" << std::endl;
            return Integer(0);
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const Integer& integer) {
        os << integer.value;
        return os;
    }

    Integer pow(int exponent) const {
        int result = 1;
        for (int i = 0; i < exponent; ++i) {
            result *= value;
        }
        return Integer(result);
    }
};
