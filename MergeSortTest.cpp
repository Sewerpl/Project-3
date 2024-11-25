#include "MergeSort.h"
#include <gtest/gtest.h>

TEST(MergeSortTest, AlreadySorted) {
    std::vector<int> array = {1, 2, 3, 4, 5};
    std::vector<int> expected = array;

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}