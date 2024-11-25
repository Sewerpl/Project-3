#include "MergeSort.h"

/**
 * @brief Sortuje podany wektor przy użyciu algorytmu sortowania przez scalanie (MergeSort).
 * @param array Wektor liczb całkowitych do posortowania.
 * 
 * Funkcja wywołuje metodę rekurencyjną `mergeSort` na całej tablicy, 
 * o ile tablica zawiera więcej niż jeden element.
 */
void MergeSort::sort(std::vector<int>& array) {
    if (array.size() > 1) {
        mergeSort(array, 0, array.size() - 1);
    }
}

/**
 * @brief Dzieli tablicę na mniejsze części, które są następnie sortowane i scalane.
 * @param array Wektor liczb całkowitych do posortowania.
 * @param left Indeks początku przedziału w tablicy do posortowania.
 * @param right Indeks końca przedziału w tablicy do posortowania.
 * 
 * Funkcja dzieli tablicę na dwie części:
 * - Lewy przedział od `left` do `mid`
 * - Prawy przedział od `mid + 1` do `right`
 * Następnie rekurencyjnie wywołuje `mergeSort` na obu przedziałach, 
 * a po ich posortowaniu scala je za pomocą funkcji `merge`.
 */
void MergeSort::mergeSort(std::vector<int>& array, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Rekurencyjnie sortujemy lewą i prawą część
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        // Scalanie dwóch posortowanych części
        merge(array, left, mid, right);
    }
}

/**
 * @brief Scala dwie posortowane części tablicy w jeden większy, posortowany przedział.
 * @param array Wektor liczb całkowitych do posortowania.
 * @param left Indeks początku lewej części tablicy.
 * @param mid Indeks końca lewej części tablicy (początek prawej części to `mid + 1`).
 * @param right Indeks końca prawej części tablicy.
 * 
 * Funkcja tworzy dwie tymczasowe tablice:
 * - `leftArray` dla lewej części (od `left` do `mid`)
 * - `rightArray` dla prawej części (od `mid + 1` do `right`)
 * Następnie scala je w jeden większy, posortowany przedział w oryginalnej tablicy.
 */
void MergeSort::merge(std::vector<int>& array, int left, int mid, int right) {
    // Rozmiary dwóch tymczasowych podtablic
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Tworzenie tymczasowych tablic
    std::vector<int> leftArray(n1);
    std::vector<int> rightArray(n2);

    // Kopiowanie danych do tymczasowych tablic
    for (int i = 0; i < n1; ++i)
        leftArray[i] = array[left + i];
    for (int i = 0; i < n2; ++i)
        rightArray[i] = array[mid + 1 + i];

    // Scala elementy dwóch podtablic do oryginalnej tablicy
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k++] = leftArray[i++];
        } else {
            array[k++] = rightArray[j++];
        }
    }

    // Przenoszenie pozostałych elementów z `leftArray`, jeśli istnieją
    while (i < n1) {
        array[k++] = leftArray[i++];
    }

    // Przenoszenie pozostałych elementów z `rightArray`, jeśli istnieją
    while (j < n2) {
        array[k++] = rightArray[j++];
    }
}
