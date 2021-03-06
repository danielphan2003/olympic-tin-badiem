#include <iostream>
#include <fstream>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }

    if (exponent % 2 == 0) {
        if (exponent / 2 == 1) {
            return base * base;
        }
        return base * base * power(base, exponent / 2);
    } 

    return base * power(base, exponent - 1);
}

int main() {
    std::ifstream input("power_recursion.inp");
    std::ofstream output("power_recursion.out");

    int base, exponent;

    input >> base >> exponent;
    output << power(base, exponent) << "\n";

    return 0;
}  