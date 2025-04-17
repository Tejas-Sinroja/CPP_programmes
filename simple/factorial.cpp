#include <iostream>
#include <limits> // Required for numeric_limits

// Function to calculate factorial
long long factorial(int n) {
    if (n < 0) {
        return -1; // Factorial is not defined for negative numbers
    }
    if (n == 0) {
        return 1; // Factorial of 0 is 1
    }
    // Check for potential overflow before calculation
    // Factorial of 21 exceeds the maximum value of long long
    if (n > 20) {
         return -2; // Indicate overflow potential
    }

    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        // Check for potential overflow during multiplication
        if (fact > std::numeric_limits<long long>::max() / i) {
             return -2; // Indicate overflow
        }
        fact *= i;
    }
    return fact;
}

int main() {
    int number;

    std::cout << "Enter a non-negative integer (0-20): ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else if (number > 20) {
         std::cout << "Input is too large. Factorial calculation is supported up to 20 due to data type limits." << std::endl;
    }
    else {
        long long result = factorial(number);
        if (result == -2) {
             std::cout << "An overflow occurred during calculation. The result is too large to store." << std::endl;
        } else {
             std::cout << "Factorial of " << number << " is " << result << std::endl;
        }
    }

    return 0;
}