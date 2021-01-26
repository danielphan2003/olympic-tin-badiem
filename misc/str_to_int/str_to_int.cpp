#include <fstream>
#include <cmath>

// Convert string to integer using recursion.
int convert(std::string number) {
    if (number == "") {
        throw("Expected a number!");
    }
    // Get the left-most character and convert it to integer.
    // Substract by '0' gives us the real value of it
    // else it will end up being the ASCII value of it.
    // E.g. '1' will return 49 instead.
    int index = number[0] - '0';

    // End of recursion
    if (number.length() == 1) {
        return index;
    }

    // Multiply current index with ten to the power of 
    // the current position in the notation.
    // E.g. 1234 -> 1 is at position 4 in the notation
    //      so getting the notation of it would be
    //      10^4 * 1 = 1000.
    int currentNotation = index * int(std::pow(10, number.length() - 1));

    // Take the lasts without current index.
    std::string highestUnit = number.substr(1, number.length());

    return currentNotation + convert(highestUnit);
}

int main() {
    // I/O
    std::ifstream input("./str_to_int.inp");
    std::ofstream output("./str_to_int.out");

    std::string number;
    input >> number;
    output << convert(number) << "\n";
}