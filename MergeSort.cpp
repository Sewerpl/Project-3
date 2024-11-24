#include "MergeSort.h"

void MergeSort::sort(std::vector<int>& array) {
    if (array.size() > 1) {
        mergeSort(array, 0, array.size() - 1);
    }
}

void MergeSort::mergeSort(std::vector<int>& array, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        merge(array, left, mid, right);
    }
}