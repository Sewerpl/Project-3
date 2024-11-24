#include <iostream>
#include "MergeSort.h"

int main() {
    std::vector<int> array = {5, 2, 9, 1, 5, 6};

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    MergeSort::sort(array);

    std::cout << "Sorted array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}