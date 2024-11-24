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

void MergeSort::merge(std::vector<int>& array, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftArray(n1);
    std::vector<int> rightArray(n2);

    for (int i = 0; i < n1; ++i)
        leftArray[i] = array[left + i];
    for (int i = 0; i < n2; ++i)
        rightArray[i] = array[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k++] = leftArray[i++];
        } else {
            array[k++] = rightArray[j++];
        }
    }

    while (i < n1) {
        array[k++] = leftArray[i++];
    }

    while (j < n2) {
        array[k++] = rightArray[j++];
    }
}