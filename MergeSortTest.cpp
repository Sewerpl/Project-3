#include "MergeSort.h"
#include <gtest/gtest.h>

/**
 * @file MergeSortTests.cpp
 * @brief Plik zawiera testy jednostkowe dla algorytmu MergeSort, korzystające z biblioteki Google Test.
 * 
 * Testy sprawdzają różne przypadki poprawności działania algorytmu, 
 * takie jak sortowanie tablicy posortowanej, odwróconej, losowej, 
 * z liczbami ujemnymi, mieszanymi oraz z duplikatami.
 */

/**
 * @test Sprawdza, czy algorytm pozostawia tablicę niezmienioną, 
 * jeśli jest ona już posortowana rosnąco.
 */
TEST(MergeSortTest, AlreadySorted) {
    std::vector<int> array = {1, 2, 3, 4, 5};
    std::vector<int> expected = array;

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}

/**
 * @test Sprawdza, czy algorytm poprawnie sortuje tablicę, 
 * która jest posortowana w odwrotnej kolejności.
 */
TEST(MergeSortTest, ReverseOrder) {
    std::vector<int> array = {5, 4, 3, 2, 1};
    std::vector<int> expected = {1, 2, 3, 4, 5};

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}

/**
 * @test Sprawdza, czy algorytm poprawnie sortuje losową tablicę liczb całkowitych.
 */
TEST(MergeSortTest, RandomArray) {
    std::vector<int> array = {4, 1, 3, 9, 7};
    std::vector<int> expected = {1, 3, 4, 7, 9};

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}

/**
 * @test Sprawdza, czy algorytm poprawnie sortuje tablicę zawierającą tylko liczby ujemne.
 */
TEST(MergeSortTest, NegativeNumbers) {
    std::vector<int> array = {-5, -1, -3, -2};
    std::vector<int> expected = {-5, -3, -2, -1};

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}

/**
 * @test Sprawdza, czy algorytm poprawnie sortuje tablicę z liczbami ujemnymi i dodatnimi.
 */
TEST(MergeSortTest, MixedNumbers) {
    std::vector<int> array = {-3, 2, -5, 1};
    std::vector<int> expected = {-5, -3, 1, 2};

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}

/**
 * @test Sprawdza, czy algorytm poprawnie obsługuje pustą tablicę, 
 * nie rzucając wyjątku i pozostawiając ją pustą.
 */
TEST(MergeSortTest, EmptyArray) {
    std::vector<int> array;
    std::vector<int> expected;

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}

/**
 * @test Sprawdza, czy algorytm nie zmienia tablicy, 
 * która zawiera tylko jeden element.
 */
TEST(MergeSortTest, SingleElement) {
    std::vector<int> array = {1};
    std::vector<int> expected = {1};

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}

/**
 * @test Sprawdza, czy algorytm poprawnie sortuje tablicę zawierającą duplikaty liczb.
 */
TEST(MergeSortTest, Duplicates) {
    std::vector<int> array = {4, 2, 4, 3, 2};
    std::vector<int> expected = {2, 2, 3, 4, 4};

    MergeSort::sort(array);
    EXPECT_EQ(array, expected);
}

/**
 * @test Sprawdza, czy algorytm poprawnie sortuje dużą tablicę 
 * zawierającą losowe liczby, w tym dodatnie, ujemne oraz duplikaty.
 */
TEST(MergeSortTest, LargeArray) {
    std::vector<int> array(150, 0);
    for (int i = 0; i < 150; ++i) 
        array[i] = rand() % 100 - 50; // Losowe liczby z zakresu od -50 do 49

    std::vector<int> expected = array;

    // Oczekiwana tablica posortowana standardową metodą
    std::sort(expected.begin(), expected.end());
    MergeSort::sort(array);

    // Porównanie wyniku z oczekiwaną tablicą
    EXPECT_EQ(array, expected);
}
