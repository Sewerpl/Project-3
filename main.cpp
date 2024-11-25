#include <iostream>
#include "MergeSort.h"

/**
 * @file main.cpp
 * @brief Główna funkcja programu testującego algorytm sortowania przez scalanie (MergeSort).
 * 
 * Program tworzy tablicę liczb całkowitych, wypisuje jej zawartość, sortuje ją za pomocą klasy `MergeSort`,
 * a następnie wypisuje posortowaną tablicę na standardowe wyjście.
 */

/**
 * @brief Funkcja główna programu.
 * 
 * Funkcja demonstruje działanie algorytmu MergeSort:
 * - Tworzy wektor liczb całkowitych.
 * - Wypisuje oryginalną tablicę.
 * - Sortuje tablicę za pomocą statycznej metody `MergeSort::sort`.
 * - Wypisuje posortowaną tablicę.
 * 
 * @return Zwraca 0, jeśli program zakończył się sukcesem.
 */
int main() {
    // Tworzenie i inicjalizacja wektora
    std::vector<int> array = {5, 2, 9, 1, 5, 6};

    // Wypisywanie oryginalnej tablicy
    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sortowanie tablicy za pomocą klasy MergeSort
    MergeSort::sort(array);

    // Wypisywanie posortowanej tablicy
    std::cout << "Sorted array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
