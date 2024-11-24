#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort {
public:
    static void sort(std::vector<int>& array);

private:
    static void mergeSort(std::vector<int>& array, int left, int right);
    static void merge(std::vector<int>& array, int left, int mid, int right);
};

#endif // mergesort.h
