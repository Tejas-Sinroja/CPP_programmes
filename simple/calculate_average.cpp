#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {5, 10, 15, 20, 25};
    int sum = 0;

    // Calculate the sum of the numbers
    for (int number : numbers) {
        sum += number;
    }

    // Calculate the average
    double average = static_cast<double>(sum) / numbers.size();

    // Print the average
    std::cout << "The average of the numbers is: " << average << std::endl;

    return 0;
}