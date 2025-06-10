#include <iostream>

int main() {
    int n, t1 = 0, t2 = 1, next_term = 0;

    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    std::cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if (i == 1) {
            std::cout << t1 << ", ";
            continue;
        }
        if (i == 2) {
            std::cout << t2 << ", ";
            continue;
        }
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;

        std::cout << next_term << ", ";
    }
    std::cout << std::endl;

    return 0;
}