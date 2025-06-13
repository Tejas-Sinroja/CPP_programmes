#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {10, 324, 45, 90, 9808};
    int n = arr.size();

    // Find the largest element
    int max_element = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    std::cout << "Largest element in the array: " << max_element << std::endl;

    return 0;
}