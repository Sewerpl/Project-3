#include "MergeSort.h"
#include <gtest/gtest.h>

TEST(MergeSortTest, AlreadySorted) {
    std::vector<int> array = {1, 2, 3, 4, 5};
    std::vector<int> expected = array;

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}

TEST(MergeSortTest, ReverseOrder) {
    std::vector<int> array = {5, 4, 3, 2, 1};
    std::vector<int> expected = {1, 2, 3, 4, 5};

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}

TEST(MergeSortTest, RandomArray) {
    std::vector<int> array = {4, 1, 3, 9, 7};
    std::vector<int> expected = {1, 3, 4, 7, 9};

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}