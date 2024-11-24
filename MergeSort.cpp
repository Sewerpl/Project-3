#include "MergeSort.h"

void MergeSort::sort(std::vector<int>& array) {
    if (array.size() > 1) {
        mergeSort(array, 0, array.size() - 1);
    }
}