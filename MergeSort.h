#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

/**
 * @class MergeSort
 * @brief Klasa implementująca algorytm sortowania przez scalanie (MergeSort).
 */
class MergeSort {
public:
    /**
     * @brief Sortuje podany wektor przy użyciu algorytmu MergeSort.
     * @param array Wektor liczb całkowitych do posortowania.
     * 
     * Funkcja sortuje elementy wektora w porządku rosnącym.
     */
    static void sort(std::vector<int>& array);

private:
    /**
     * @brief Rekurencyjnie dzieli tablicę na mniejsze fragmenty i sortuje je.
     * @param array Wektor liczb całkowitych do posortowania.
     * @param left Indeks początku przedziału w tablicy do posortowania.
     * @param right Indeks końca przedziału w tablicy do posortowania.
     * 
     * Funkcja dzieli tablicę na dwie części i wywołuje na nich rekurencyjnie
     * metodę `mergeSort`. Następnie scala posortowane części za pomocą metody `merge`.
     */
    static void mergeSort(std::vector<int>& array, int left, int right);

    /**
     * @brief Scala dwie posortowane części tablicy w jeden większy, posortowany przedział.
     * @param array Wektor liczb całkowitych do posortowania.
     * @param left Indeks początku lewej części tablicy.
     * @param mid Indeks końca lewej części tablicy i początku prawej części.
     * @param right Indeks końca prawej części tablicy.
     * 
     * Funkcja bierze dwa posortowane podzbiory w tablicy:
     * - Lewy podzbiór: od `left` do `mid`
     * - Prawy podzbiór: od `mid + 1` do `right`
     * Następnie scala je w jeden większy, posortowany fragment w tablicy.
     */
    static void merge(std::vector<int>& array, int left, int mid, int right);
};

#endif // MERGESORT_H
